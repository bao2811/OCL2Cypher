package org.uet.dse.ocl2cypher.plugin.action;

import org.tzi.use.runtime.gui.IPluginAction;
import org.tzi.use.runtime.gui.IPluginActionDelegate;
import org.uet.dse.ocl2cypher.plugin.ui.Ocl2CypherDialog;

/**
 * Opens the OCL2Cypher standalone research dialog.
 */
public final class ActionOpenOcl2Cypher implements IPluginActionDelegate {
    @Override
    public void performAction(IPluginAction pluginAction) {
        new Ocl2CypherDialog(pluginAction.getParent(), pluginAction.getSession()).setVisible(true);
    }
}
