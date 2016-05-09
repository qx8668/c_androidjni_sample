package com.myapp.jni.code;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.view.View;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity{

    public JNI jni;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        jni = new JNI();
    }
    public void clickString(View v) {
        Toast.makeText(getApplicationContext(), "" + jni.stringMethod(), Toast.LENGTH_LONG).show();
        Toast.makeText(getApplicationContext(), "" + jni.helloFromCPP(), Toast.LENGTH_LONG).show();
    }

    public void click(View v){
        Toast.makeText(getApplicationContext(), "" + jni.add(3, 4), Toast.LENGTH_LONG).show();
    }

    public void passString(View v){
        Toast.makeText(getApplicationContext(), jni.sayHelloInC("abcd"), Toast.LENGTH_LONG).show();
    }

    public void passIntArray(View v){
        int[] array = new int[]{1,2,3,4,5};
        array = jni.arrElementsIncrease(array);
        for(int i: array){
            Log.d("test", i+"");
        }
    }

    public void callbackvoid(View v){
        jni.callbackvoidmethod();
    }

    public void callbackint(View v){
        jni.callbackintmethod();
    }

    public void callbackString(View v){
        jni.callbackStringmethod();
    }

    public void fork(View v){
        jni.cfork();
    }
}
