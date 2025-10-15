// Muestre un mensaje que diga: "Hola [nombre del usuario], tienes [x] años. Este programa está hecho en el lenguaje de programación: [lenguaje]"
import java.util.Scanner;

public class Programa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Introduce tu nombre: ");
        String nombre = sc.next();
        System.out.print("Introduce tu año de nacimiento: ");
        int nacimiento = sc.nextInt();
        int edad = 2025 - nacimiento;
        System.out.println("Hola " + nombre + ", tienes " + edad + " años. Este programa está hecho en el lenguaje de programación: Java");
        sc.close();
    }
}