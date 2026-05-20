#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
    char vocales[100];
    char consonantes[100];
    int cont_vocales = 0;
    int cont_consonantes = 0;
    char caracter;

    printf("Ingrese caracteres uno por uno (escriba 'x' o 'X' para finalizar):\n");

    do {
        scanf(" %c", &caracter);

        if (caracter == 'x' || caracter == 'X') {
            break;
        }

        if (isalpha(caracter)) {
            char minuscula = tolower(caracter);

            if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' ||
                minuscula == 'o' || minuscula == 'u') {
                if (cont_vocales < 99) {
                    vocales[cont_vocales] = caracter;
                    cont_vocales++;
                }
            }
            else {
                if (cont_consonantes < 99) {
                    consonantes[cont_consonantes] = caracter;
                    cont_consonantes++;
                }
            }
        }
    } while (1);

    vocales[cont_vocales] = '\0';
    consonantes[cont_consonantes] = '\0';

    printf("\n--- Resultados de la Clasificacion ---\n");

    printf("Vocales almacenadas: ");
    for (int i = 0; i < cont_vocales; i++) {
        printf("%c ", vocales[i]);
    }
    printf("\n");

    printf("Consonantes almacenadas: ");
    for (int i = 0; i < cont_consonantes; i++) {
        printf("%c ", consonantes[i]);
    }
    printf("\n");

    return 0;
}