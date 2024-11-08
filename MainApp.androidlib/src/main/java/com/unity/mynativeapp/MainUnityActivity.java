package com.unity.mynativeapp;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import com.unity3d.player.UnityPlayerActivity;

public class MainUnityActivity extends UnityPlayerActivity {

    private String appendCommandLineArgument(String cmdLine, String arg) {
        if (arg == null || arg.isEmpty())
            return cmdLine;
        else if (cmdLine == null || cmdLine.isEmpty())
            return arg;
        else
            return cmdLine + " " + arg;
    }

    protected String updateUnityCommandLineArguments(String cmdLine)
    {
//        return appendCommandLineArgument(cmdLine, "-androidChainedSignalHandlerBehavior=disabled");
        return cmdLine;
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        String cmdLine = updateUnityCommandLineArguments(getIntent().getStringExtra("unity"));
        getIntent().putExtra("unity", cmdLine);

        // Setup activity layout
        SharedClass.addControlsToUnityFrame(this);
        Intent intent = getIntent();
        handleIntent(intent);
    }


    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        handleIntent(intent);
        setIntent(intent);
    }

    void handleIntent(Intent intent) {
        if (intent == null || intent.getExtras() == null) return;

        if (intent.getExtras().containsKey("doQuit")) {
            if (mUnityPlayer != null) {
                finish();
            }
        }
    }

    @Override
    public void onUnityPlayerUnloaded() {
        SharedClass.showMainActivity("");
    }

}
