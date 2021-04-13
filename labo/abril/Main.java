import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        Scanner ingreso = new Scanner(System.in);

        System.out.println("Ingrese su nombre");
        String textoIngresado = ingreso.nextLine();
        System.out.println("En texto que ha ingresado es: " + textoIngresado);

        System.out.println("---------------------------------------------------");

        System.out.println("Ingrese un número entero");
        int enteroIngresado = ingreso.nextInt();
        System.out.println("el número entero que ha ingresado es: " + enteroIngresado);

        System.out.println("---------------------------------------------------");

        System.out.println("Ingrese un número real");
        float realIngresado = ingreso.nextFloat();
        System.out.println("el número real que ha ingresado es: " + realIngresado);

        System.out.println("----------------------------------------------------");

    }
}

