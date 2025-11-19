#include <stdio.h>

int main() {
    int n1, n2, suma;
    int *a = &n1;
    int *b = &n2;

    printf("Introduce el primer numero: ");
    scanf("%d", a);

    printf("Introduce el segundo numero: ");
    scanf("%d", b);

    suma = *a + *b;

    printf("Resultado: %d\n", suma);

    return 0;
}