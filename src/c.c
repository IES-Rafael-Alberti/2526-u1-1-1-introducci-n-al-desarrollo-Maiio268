// Muestre un mensaje que diga: "Hola [nombre del usuario], tienes [x] años. Este programa está hecho en el lenguaje de programación: [lenguaje]"#include <stdio.h>

int main() {
    char nombre[50];
    int nacimiento, edad;

    printf("Introduce tu nombre: ");
    scanf("%49s", nombre);

    printf("Introduce tu año de nacimiento: ");
    scanf("%d", &nacimiento);

    edad = 2025 - nacimiento;

    printf("Hola %s, tienes %d años. Este programa está hecho en el lenguaje de programación: C\n", nombre, edad);

    return 0;
}