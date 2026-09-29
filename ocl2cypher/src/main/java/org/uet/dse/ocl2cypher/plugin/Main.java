package org.uet.dse.ocl2cypher.plugin;

import org.tzi.use.runtime.IPlugin;
import org.tzi.use.runtime.IPluginRuntime;

/**
 * OCL2Cypher plugin entry point for USE.
 *
 * <p>This plugin provides an independent OCL-to-Cypher transformation and
 * verification tool. All actions are registered declaratively via useplugin.xml.
 */
public class Main implements IPlugin {

    @Override
    public String getName() {
        return "OCL2CypherPlugin";
    }

    @Override
    public void run(IPluginRuntime pluginRuntime) {
        // Actions are registered declaratively via useplugin.xml.
    }
}
