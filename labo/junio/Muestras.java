package com.company;

public class Muestras {

    public static void main(String[] args) {
        String palabra = "abcdef";
        int longitud = palabra.length();

        String a = "24";
        int num1 = Integer.parseInt(a);
        System.out.println(num1);

        String b = "2.34";
        float num2 = Float.parseFloat(b);

        double num3 = Math.PI + 2;
        System.out.println(num3);

        int num4 = Math.abs(-34);

        Muestras.print("aaaaaa");

        print("bbbbb");

        print(PRECIO_INDIVIDUAL);

    }

    public static void print(String string){
        System.out.println(string);
    }

    public static void print(Object objeto){
        String string = objeto.toString();
        System.out.println(string);
    }

    public static float PRECIO_INDIVIDUAL = 450.50f;

}
