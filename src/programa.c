#include <stdio.h>

int main() {
    char nombre[50];
    int nacimiento, edad;

    printf("Introduce tu nombre: ");
    scanf("%49s", nombre);

    printf("Introduce tu ano de nacimiento: ");
    scanf("%d", &nacimiento);

    edad = 2025 - nacimiento;

    printf("Hola %s, tienes %d anos. Este programa esta hecho en el lenguaje de programacion: C\n", nombre, edad);

    return 0;
}