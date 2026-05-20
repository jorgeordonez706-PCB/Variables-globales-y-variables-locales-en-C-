#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int numero;
    int total = 0;
    int menores_25 = 0;
    int mayores_75 = 0;
    int entre_25_y_75 = 0;

    printf("Ingrese numeros enteros (ingrese un numero negativo para finalizar):\n");

    do {
        scanf("%d", &numero);

        if (numero >= 0) {
            total++;

            if (numero < 25) {
                menores_25++;
            }
            else if (numero > 75) {
                mayores_75++;
            }
            else {
                entre_25_y_75++;
            }
        }

    } while (numero >= 0);

    printf("\n--- Resumen Estadistico ---\n");
    printf("Total de numeros leidos: %d\n", total);
    printf("Numeros menores a 25: %d\n", menores_25);
    printf("Numeros mayores a 75: %d\n", mayores_75);
    printf("Numeros entre 25 y 75 (inclusive): %d\n", entre_25_y_75);

    return 0;
}