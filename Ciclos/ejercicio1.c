//Crear un programa que sume los n primeros numero 

#include <stdio.h>

int main() {
    int n, suma = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    printf("La suma de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}