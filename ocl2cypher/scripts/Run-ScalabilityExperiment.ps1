[CmdletBinding()]
param(
    [string]$Sizes = '50,200,500',
    [int]$Warmups = 3,
    [int]$Repetitions = 10,
    [int]$QueryTimeoutSeconds = 60,
    [switch]$ProfileQueries,
    [switch]$LargeMode,
    [switch]$ConfirmDisposableDatabase,
    [string]$EnvFile = '',
    [string]$OutputRoot = ''
)

$ErrorActionPreference = 'Stop'
$root = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
$runId = (Get-Date -Format 'yyyyMMdd-HHmmss') + '-' + [guid]::NewGuid().ToString('N')
if ([string]::IsNullOrWhiteSpace($OutputRoot)) {
    $OutputRoot = Join-Path $root 'ocl2cypher/target/experiments'
} else {
    $OutputRoot = (Resolve-Path -LiteralPath $OutputRoot).Path
}
$runDir = Join-Path $OutputRoot $runId
$scaleDir = Join-Path $runDir 'scale'
$connectionKeys = @('NEO4J_URI', 'NEO4J_DB', 'NEO4J_USER', 'NEO4J_PASSWORD')
$savedConnections = @{}
foreach ($key in $connectionKeys) {
    $savedConnections[$key] = [Environment]::GetEnvironmentVariable($key, 'Process')
}
$savedScale = [Environment]::GetEnvironmentVariable('OCL2CYPHER_SCALE_LIVE', 'Process')

function Import-ConnectionEnvironment([string]$Path) {
    $values = @{}
    foreach ($line in [IO.File]::ReadAllLines($Path)) {
        if ($line -notmatch '^\s*(NEO4J_URI|NEO4J_DB|NEO4J_USER|NEO4J_PASSWORD)\s*=(.*)$') { continue }
        $key = $Matches[1]
        $value = $Matches[2].Trim()
        if ($values.ContainsKey($key)) { throw "Duplicate connection key: $key" }
        if ($value.StartsWith('"') -or $value.StartsWith("'")) {
            if ($value.Length -lt 2 -or $value[$value.Length - 1] -ne $value[0]) {
                throw "Unclosed quote for $key"
            }
            $value = $value.Substring(1, $value.Length - 2)
        }
        if ([string]::IsNullOrWhiteSpace($value)) { throw "Empty connection key: $key" }
        $values[$key] = $value
    }
    foreach ($key in $connectionKeys) {
        if (-not $values.ContainsKey($key)) { throw "EnvFile missing $key" }
        [Environment]::SetEnvironmentVariable($key, $values[$key], 'Process')
    }
}

function Assert-Configuration {
    if (-not $ConfirmDisposableDatabase) {
        throw 'Scale experiment requires -ConfirmDisposableDatabase.'
    }
    foreach ($key in $connectionKeys) {
        if ([string]::IsNullOrWhiteSpace([Environment]::GetEnvironmentVariable($key))) {
            throw "Scale experiment requires $key"
        }
    }
    if ($Warmups -lt 0) { throw 'Warmups must not be negative.' }
    if ($Repetitions -le 0) { throw 'Repetitions must be positive.' }
    if ($QueryTimeoutSeconds -le 0) { throw 'QueryTimeoutSeconds must be positive.' }
    $parsed = @($Sizes.Split(',') | ForEach-Object { [int]$_.Trim() })
    if ($parsed.Count -eq 0 -or @($parsed | Where-Object { $_ -le 0 -or $_ -gt 20000 }).Count -gt 0) {
        throw 'Sizes must be comma-separated integers in 1..20000.'
    }
}

function Get-InputHashes {
    $paths = @((Join-Path $root 'pom.xml'), (Join-Path $root 'ocl2cypher/pom.xml'))
    foreach ($folder in @('ocl2cypher/src', 'ocl2cypher/scripts',
            'example/ocl2cypher-correctness-case-study')) {
        $paths += @(Get-ChildItem -LiteralPath (Join-Path $root $folder) -File -Recurse |
            ForEach-Object FullName)
    }
    @($paths | Sort-Object -Unique | ForEach-Object {
        [ordered]@{
            path = $_.Substring($root.Length + 1)
            sha256 = (Get-FileHash -LiteralPath $_ -Algorithm SHA256).Hash
        }
    })
}

if ($EnvFile) { $EnvFile = (Resolve-Path -LiteralPath $EnvFile).Path }

Push-Location $root
try {
    if ($EnvFile) { Import-ConnectionEnvironment $EnvFile }
    Assert-Configuration
    New-Item -ItemType Directory -Path $runDir | Out-Null

    $before = Get-InputHashes
    $before | ConvertTo-Json -Depth 5 |
        Set-Content -LiteralPath (Join-Path $runDir 'inputs-before.json') -Encoding UTF8
    $revision = (& git rev-parse HEAD 2>$null)
    $dirty = @(& git status --porcelain -- ocl2cypher example 2>$null)
    [ordered]@{
        runId = $runId
        revision = $revision
        workingTreeDirty = ($dirty.Count -gt 0)
        startedUtc = [DateTime]::UtcNow.ToString('o')
        generatedPersonCounts = $Sizes
        warmupsPerQuery = $Warmups
        measuredRepetitionsPerQuery = $Repetitions
        queryTimeoutSeconds = $QueryTimeoutSeconds
        profileQueries = [bool]$ProfileQueries
        largeMode = [bool]$LargeMode
        invariantDefinitionsPerSize = 26
        admittedQueriesPerSize = 22
        excludedImplementationExtensions = @('Company::UniqueEmployeeNames')
        measurement = 'Neo4j primary: server-reported resultAvailableAfter + resultConsumedAfter; clientElapsedNanos separately records end-to-end call latency. USE: in-JVM evaluation and violation-ID set construction.'
    } | ConvertTo-Json -Depth 5 |
        Set-Content -LiteralPath (Join-Path $runDir 'scale-manifest.json') -Encoding UTF8

    $savedErrorPreference = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'
    & java -version 2>&1 | Out-File -LiteralPath (Join-Path $runDir 'toolchain.txt') -Encoding UTF8
    & mvn -version 2>&1 | Out-File -LiteralPath (Join-Path $runDir 'toolchain.txt') -Encoding UTF8 -Append
    $ErrorActionPreference = $savedErrorPreference

    [Environment]::SetEnvironmentVariable('OCL2CYPHER_SCALE_LIVE', 'true', 'Process')
    $reports = Join-Path $runDir 'surefire'
    & mvn -pl ocl2cypher '-Dtest=ScalabilityExperimentIT' `
        "-Docl2cypher.scaleSizes=$Sizes" `
        "-Docl2cypher.scaleWarmups=$Warmups" `
        "-Docl2cypher.scaleRepetitions=$Repetitions" `
        "-Docl2cypher.scaleQueryTimeoutSeconds=$QueryTimeoutSeconds" `
        "-Docl2cypher.scaleProfileQueries=$([bool]$ProfileQueries)" `
        "-Docl2cypher.scaleLargeMode=$([bool]$LargeMode)" `
        "-Docl2cypher.scaleRunId=$runId" `
        "-Docl2cypher.scaleOutput=$scaleDir" `
        "-Docl2cypher.testReportsDirectory=$reports" test
    if ($LASTEXITCODE -ne 0) {
        throw "Scale experiment failed (Maven exit $LASTEXITCODE); inspect $runDir"
    }

    $summaryPath = Join-Path $scaleDir 'scale-summary.json'
    if (-not (Test-Path -LiteralPath $summaryPath)) { throw 'Missing scale-summary.json' }
    $summary = Get-Content -Raw -LiteralPath $summaryPath | ConvertFrom-Json
    $sizeCount = @($Sizes.Split(',') | ForEach-Object { $_.Trim() } | Sort-Object -Unique).Count
    $expectedSamples = $sizeCount * 22 * $Repetitions
    if ($summary.status -ne 'PASS' -or $summary.failureCount -ne 0 -or
        $summary.querySamples -ne $expectedSamples -or
        $summary.useQuerySamples -ne $expectedSamples) {
        throw "Unexpected scale evidence counts in $summaryPath"
    }

    $after = Get-InputHashes
    $after | ConvertTo-Json -Depth 5 |
        Set-Content -LiteralPath (Join-Path $runDir 'inputs-after.json') -Encoding UTF8
    if (($before | ConvertTo-Json -Depth 5 -Compress) -ne
        ($after | ConvertTo-Json -Depth 5 -Compress)) {
        throw 'Experiment inputs changed during execution.'
    }

    [ordered]@{
        status = 'SCALE_EXPERIMENT_PASS'
        completedUtc = [DateTime]::UtcNow.ToString('o')
        evidenceDirectory = $runDir
        note = 'Finite generated workload; no extrapolation beyond measured sizes.'
    } | ConvertTo-Json |
        Set-Content -LiteralPath (Join-Path $runDir 'outcome.json') -Encoding UTF8
    Write-Host "Scale experiment PASS. Evidence directory: $runDir"
} catch {
    if (Test-Path -LiteralPath $runDir) {
        [ordered]@{
            status = 'FAILED_OR_INCOMPLETE'
            completedUtc = [DateTime]::UtcNow.ToString('o')
            message = $_.Exception.Message
        } | ConvertTo-Json |
            Set-Content -LiteralPath (Join-Path $runDir 'outcome.json') -Encoding UTF8
    }
    throw
} finally {
    foreach ($key in $connectionKeys) {
        [Environment]::SetEnvironmentVariable($key, $savedConnections[$key], 'Process')
    }
    [Environment]::SetEnvironmentVariable('OCL2CYPHER_SCALE_LIVE', $savedScale, 'Process')
    Pop-Location
}
