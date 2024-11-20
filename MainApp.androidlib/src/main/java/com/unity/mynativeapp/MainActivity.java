package com.unity.mynativeapp;

import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.graphics.Color;
import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;

import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import io.sentry.Sentry;

public class MainActivity extends AppCompatActivity {
    private enum ActivityType {
        PLAYER_ACTIVITY, PLAYER_GAME_ACTIVITY, BOTH
    }

    boolean isUnityLoaded = false;
    private ActivityType mActivityType = ActivityType.BOTH;
    private boolean isGameActivity = false;

    private Button mShowUnityButton;
    private Button mShowUnityGameButton;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
    // waiting for view to draw to better represent a captured error with a screenshot
    findViewById(android.R.id.content).getViewTreeObserver().addOnGlobalLayoutListener(() -> {
      try {
        throw new Exception("This app uses Sentry! :)");
      } catch (Exception e) {
        Sentry.captureException(e);
      }
    });

        isUnityLoaded = false;
        setContentView(R.layout.activity_main);
        Toolbar toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
        adjustButtons();

        handleIntent(getIntent());

        findViewById(R.id.do_fake_button).setOnClickListener(view -> {
            doFake();
        });
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        handleIntent(intent);
        setIntent(intent);
    }

    void handleIntent(Intent intent) {
        if (intent == null || intent.getExtras() == null)
            return;

        if (intent.getExtras().containsKey("setColor")) {
            View v = findViewById(R.id.finish_button);
            switch (intent.getExtras().getString("setColor")) {
                case "yellow":
                    v.setBackgroundColor(Color.YELLOW);
                    break;
                case "red":
                    v.setBackgroundColor(Color.RED);
                    break;
                case "blue":
                    v.setBackgroundColor(Color.BLUE);
                    break;
                default:
                    v.setBackgroundColor(0xFFd6d7d7);
                    break;
            }
        }
    }

    public void onClickShowUnity(View v) {
        isUnityLoaded = true;
        isGameActivity = !(v.getId() == R.id.show_unity_button);
        disableShowUnityButtons();

        int id = v.getId();
        if (id == R.id.show_unity_button) {
            startUnityWithClass(getMainUnityActivityClass());
        } else if (id == R.id.show_unity_game_button) {
            startUnityWithClass(getMainUnityGameActivityClass());
        }
    }

    private void startUnityWithClass(Class klass) {
        Intent intent = new Intent(this, klass);
        intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
        startActivityForResult(intent, 1);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == 1) {
            isUnityLoaded = false;
            enableShowUnityButtons();
            showToast("Unity finished.");
        }
    }

    public void unloadUnity(Boolean doShowToast) {
        if (isUnityLoaded) {
            Intent intent;
            if (isGameActivity)
                intent = new Intent(this, getMainUnityGameActivityClass());
            else
                intent = new Intent(this, getMainUnityActivityClass());
            intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
            intent.putExtra("doQuit", true);
            startActivity(intent);
            isUnityLoaded = false;
        } else if (doShowToast) {
            showToast("Show Unity First");
        }
    }

    public void doFake(){
        final String message = "*** *** *** *** *** *** *** *** *** *** *** *** *** *** *** ***\nVersion '2020.3.48f1 (b805b124c6b7)', Build type 'Release', Scripting Backend 'il2cpp', CPU 'arm64-v8a'\nBuild fingerprint: 'motorola/sabahl_gin/sabahl:13/TLAS33.105-285-5/105-285-5:user/release-keys'\nRevision: '0'\nABI: 'arm64'\nTimestamp: 2024-11-18 20:28:55+0530\npid: 803, tid: 1177, name: binder:803_4  \u003E\u003E\u003E com.winzo.gold:gameProcess \u003C\u003C\u003C\nuid: 10192\nsignal 11 (SIGSEGV), code 1 (SEGV_MAPERR), fault addr 0x6f632f78\n    x0  0000000014443f90  x1  000000006f632f78  x2  0000000070fda138  x3  0000000000000000\n    x4  0000000000000000  x5  0000000000000000  x6  0000000000000000  x7  0000000000000000\n    x8  0000000070cb286c  x9  0000000000000037  x10 0000000000000000  x11 0000000020000000\n    x12 0000007818962904  x13 0000007818962924  x14 00000078189629a4  x15 fffffff000000000\n    x16 00000078143c5070  x17 000000000005110f  x18 000000767e208000  x19 b400007780bcf000\n    x20 0000000000000000  x21 b400007780bcf0c0  x22 0000000071c2cee0  x23 0000000000000002\n    x24 0000000014443f90  x25 0000000000000000  x26 0000000000000000  x27 0000000014620fc0\n    x28 00000078a0709610  x29 000000767ec3d410\n    sp  000000767ec3d390  lr  00000000728c5b20  pc  00000000728c5b50\n\nbacktrace:\n      #00 pc 00000000008bdb50  /data/misc/apexdata/com.android.art/dalvik-cache/arm64/boot.oat\n";
        final Error rootCause = new Error(message);
        final StackTraceElement[] stackTraceElements = new StackTraceElement[1];
        stackTraceElements[0] = new StackTraceElement("libunity", "0x98dfd4", null, -1);
        rootCause.setStackTrace(stackTraceElements);

        final String errorMessage = "FATAL EXCEPTION [UnityMain]\nUnity version     : 2020.3.48f1\nDevice model      : ITEL itel S665L\nDevice fingerprint: Itel/S665L-GL/itel-S665L:12/SP1A.210812.016/GL-20240131V499:user/release-keys\nBuild Type        : Release\nScripting Backend : IL2CPP\nABI               : arm64-v8a\nStrip Engine Code : true\n";
        final Error error = new Error(errorMessage, rootCause);
        error.setStackTrace(new StackTraceElement[]{});
        throw error;
        //throw new Error("Uncaught Exception from Java.");
    }

    public void onClickFinish(View v) {
        unloadUnity(true);
    }

    private void showToast(String message) {
        CharSequence text = message;
        int duration = Toast.LENGTH_SHORT;
        Toast toast = Toast.makeText(getApplicationContext(), text, duration);
        toast.show();
    }

    @Override
    public void onBackPressed() {
        finishAffinity();
    }

    private Class findClassUsingReflection(String className) {
        try {
            return Class.forName(className);
        } catch (final ClassNotFoundException e) {
            e.printStackTrace();
        }
        return null;
    }

    private Class getMainUnityActivityClass() {
        return findClassUsingReflection("com.unity.mynativeapp.MainUnityActivity");
    }

    private Class getMainUnityGameActivityClass() {
        return findClassUsingReflection("com.unity.mynativeapp.MainUnityGameActivity");
    }

    private void adjustButtons() {
        mShowUnityButton = findViewById(R.id.show_unity_button);
        mShowUnityGameButton = findViewById(R.id.show_unity_game_button);

        if (getMainUnityActivityClass() != null) {
            mShowUnityButton.setVisibility(View.VISIBLE);
            mActivityType = ActivityType.PLAYER_ACTIVITY;
        }

        if (getMainUnityGameActivityClass() != null) {
            mShowUnityGameButton.setVisibility(View.VISIBLE);
            mActivityType = ActivityType.PLAYER_GAME_ACTIVITY;
        }

        if (mShowUnityButton.getVisibility() == View.VISIBLE && mShowUnityGameButton.getVisibility() == View.VISIBLE) {
            mActivityType = ActivityType.BOTH;
        }
    }

    private void disableShowUnityButtons() {
        if (mActivityType != ActivityType.BOTH)
            return;

        mShowUnityButton.setEnabled(!isGameActivity);
        mShowUnityGameButton.setEnabled(isGameActivity);
    }

    private void enableShowUnityButtons() {
        if (mActivityType != ActivityType.BOTH)
            return;

        mShowUnityButton.setEnabled(true);
        mShowUnityGameButton.setEnabled(true);
    }
}
