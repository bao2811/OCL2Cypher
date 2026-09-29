package org.uet.dse.ocl2cypher.cypher;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.math.BigDecimal;
import java.math.BigInteger;
import org.junit.jupiter.api.Test;
import org.uet.dse.ocl2cypher.runtime.ExactReal;

class ExactBinary64CertificatesTest {

    @Test
    void decidesExactBinary64RepresentabilityWithoutApproximateRounding() {
        assertTrue(exact("0"));
        assertTrue(exact("0.5"));
        assertFalse(exact("0.1"));
        assertTrue(ExactBinary64Certificates.isExactlyBinary64(
                ExactReal.of(BigInteger.ONE.shiftLeft(53))));
        assertFalse(ExactBinary64Certificates.isExactlyBinary64(
                ExactReal.of(BigInteger.ONE.shiftLeft(53).add(BigInteger.ONE))));
        assertTrue(ExactBinary64Certificates.isExactlyBinary64(
                ExactReal.of(new BigDecimal(Double.MAX_VALUE))));
        assertTrue(ExactBinary64Certificates.isExactlyBinary64(
                ExactReal.of(new BigDecimal(Double.MIN_VALUE))));
        assertFalse(ExactBinary64Certificates.isExactlyBinary64(
                new ExactReal(BigInteger.ONE, BigInteger.ONE.shiftLeft(1075))));
        assertFalse(ExactBinary64Certificates.isExactlyBinary64(
                ExactReal.of(BigInteger.ONE.shiftLeft(1024))));
    }

    private static boolean exact(String decimal) {
        return ExactBinary64Certificates.isExactlyBinary64(
                ExactReal.of(new BigDecimal(decimal)));
    }
}
