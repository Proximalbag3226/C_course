//Multiplos de 3 desde 1 hasta n

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    
    printf("Multiplos de 3 desde 1 hasta %d:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}