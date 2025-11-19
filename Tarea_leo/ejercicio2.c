#include <stdio.h>

int suma(int *a, int *b);

int main() {
    int *a, *b, c,d,e;
    a = &d;
    b = &e;
    printf("Introduce el primer numero: ");
    scanf("%d", a);
    printf("Introduce el segundo numero: ");
    scanf("%d", b);
    c = suma(a, b);
    printf("Resultado: %d\n", c);
    return 0;
}

int suma(int *a, int *b) {
    int resultado;
    resultado = *a + *b;
}