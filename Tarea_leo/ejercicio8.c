#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int capacidad = 10;
    int contador = 0;
    char c;

    char *texto = (char*) malloc(capacidad * sizeof(char));
    if (texto == NULL) return 1;

    printf("Escribe. El programa se cortara en cuanto toques el punto (.):\n");
    printf("> ");

    while (1) {
        c = _getch();
        if (c == '.') {
            break;
        }

        printf("%c", c);
        texto[contador] = c;
        contador++;
        if (contador >= capacidad) {
            capacidad *= 2;
            char *temp = (char*) realloc(texto, capacidad * sizeof(char));
            if (temp == NULL) {
                free(texto);
                return 1;
            }
            texto = temp;
        }
    }
    texto[contador] = '\0';

    free(texto);
    return 0;
}