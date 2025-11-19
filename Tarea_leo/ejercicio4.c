#include <stdio.h>
#include <stdlib.h>

int max_num(int *array, int n);

int main() {
    int n;
    int *array;
    printf("Introduce la cantidad de numero del array: ");
    scanf("%d", &n);
    array = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Introduce el numro: ", i);
        scanf("%d", &array[i]);
    }
    int max = max_num(array, n);
    printf("El numero maximo es: %d", max);
    return 0;
}

int max_num(int *array, int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}