#include <stdio.h>

int main() {
    int vocales = 0;
    int consonantes = 0;
    char array[1000];

    char *ptr;

    printf("Ingrese la cadena: ");

    fgets(array, 1000, stdin);

    ptr = array;

    while (*ptr != '\0' && *ptr != '\n') {
        char caracterActual = *ptr;

        if (caracterActual == 'a' || caracterActual == 'e' ||
            caracterActual == 'i' || caracterActual == 'o' ||
            caracterActual == 'u' || caracterActual == 'A' ||
            caracterActual == 'E' || caracterActual == 'I' ||
            caracterActual == 'O' || caracterActual == 'U') {

            vocales++;
            }
        else if (caracterActual >= 'a' && caracterActual <= 'z') {
            consonantes++;
        }
        ptr++;
    }
    printf("Vocales: %d\n", vocales);
    printf("Consonantes: %d\n", consonantes);

    return 0;
}