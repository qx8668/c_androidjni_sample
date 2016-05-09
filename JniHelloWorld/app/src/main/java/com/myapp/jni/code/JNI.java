package com.myapp.jni.code;

public class JNI {
    static {
        System.loadLibrary("data");
        System.loadLibrary("cpp");
        System.loadLibrary("cfork");
    }
    public native String stringMethod();
    //传递两个int类型的变量给C 让C加一下返回来
    public native int add(int x, int y);
    //传递String类型的参数给C 处理一下返回来
    public native String sayHelloInC(String s);
    //传递int类型的数组给C
    public native int[] arrElementsIncrease(int[] intArray);

    public native void callbackvoidmethod();

    public native void callbackintmethod();

    public native void callbackStringmethod();

    //C调用java空方法
    public void helloFromJava(){
        System.out.println("hello from java");
    }
    //C调用java中的带两个int参数的方法
    public int adda(int x,int y) {
        System.out.println("adda " + x + "" + y);
        return x+y;
    }
    //C调用java中参数为string的方法
    public void printString(String s){
        System.out.println(s);
    }

    public native String helloFromCPP();

    public native void cfork();
}
