#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int categoriaA = 0;
    int categoriaB = 0;
    int categoriaC = 0;
    int categoriaD = 0;

    for (int i = 0; i < 15; i++) {
        double peso;
        double talla;

        printf("--- Alumno %d ---\n", i + 1);
        printf("Ingrese el peso (kg): ");
        scanf("%lf", &peso);
        printf("Ingrese la talla (metros): ");
        scanf("%lf", &talla);

        if (peso < 40.0 && talla < 1.55) {
            categoriaA++;
        } else if (peso >= 40.0 && peso <= 50.0 && talla >= 1.55 && talla <= 1.65) {
            categoriaB++;
        } else if (peso > 50.0 && peso < 60.0 && talla >= 1.65 && talla <= 1.70) {
            categoriaC++;
        } else if (peso >= 60.0 && talla > 1.70) {
            categoriaD++;
        }
    }

    printf("\n===================================\n");
    printf("       ESTADISTICA FINAL\n");
    printf("===================================\n");
    printf("Alumnos en Categoria A: %d\n", categoriaA);
    printf("Alumnos en Categoria B: %d\n", categoriaB);
    printf("Alumnos en Categoria C: %d\n", categoriaC);
    printf("Alumnos en Categoria D: %d\n", categoriaD);

    return 0;
}