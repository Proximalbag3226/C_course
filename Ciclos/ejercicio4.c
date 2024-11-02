//Suma pares desde n hasta m

#include <stdio.h>

int main() {
    int n, m, suma = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    printf("Ingrese el valor de m: ");
    scanf("%d", &m);

    if (n > m) {
        printf("Error: n debe ser menor o igual que m.\n");
        return 1;
    }

    for (int i = n; i <= m; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    printf("La suma de los pares desde %d hasta %d es: %d\n", n, m, suma);

    return 0;
}