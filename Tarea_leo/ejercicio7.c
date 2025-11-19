#include <stdio.h>
#include <stdlib.h>

int sumar_arreglo(int *ptr, int n);

int main() {
    int *misNumeros = NULL;
    int *tempPtr = NULL;
    int n = 0;
    int entrada;
    printf("1"
           " Ingrese numeros enteros.\n");
    printf("Para TERMINAR y ver la suma, ingrese cualquier LETRA.\n\n");

    while (1) {
        printf("Ingrese el numero %d: ", n + 1);

        if (scanf("%d", &entrada) == 1) {
            n++;
            tempPtr = (int*) realloc(misNumeros, n * sizeof(int));

            if (tempPtr == NULL) {
                printf("Error: Memoria agotada.\n");
                free(misNumeros);
                return 1;
            }
            misNumeros = tempPtr;
            *(misNumeros + n - 1) = entrada;
        } else {
            break;
        }
    }

    if (n > 0) {
        int resultado = sumar_arreglo(misNumeros, n);
        printf("\n-----------------------------\n");
        printf("Se ingresaron %d numeros.\n", n);
        printf("La suma total es: %d\n", resultado);
    } else {
        printf("\nNo se ingresaron numeros.\n");
    }

    free(misNumeros);

    return 0;
}

int sumar_arreglo(int *ptr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + *ptr;
        ptr++;
    }
    return sum;
}