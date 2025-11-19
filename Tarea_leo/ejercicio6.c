#include <stdio.h>
#include <stdlib.h>
#define max 1000
#define min -1000

void dividir(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high) {
    int pivote = arr[high];

    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivote) {
            i++;
            dividir(&arr[i], &arr[j]);
        }
    }

    dividir(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);

        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int *array;
    int n;
    printf("Introduce la cantidad de numeros aleatorios deseados: ");
    scanf("%d", &n);
    array = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int rd_num = rand() % (max - min + 1) + min;
        array[i] = rd_num;
    }
    printf("Arreeglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    quickSort(array, 0, n - 1);
    printf("\n Arreglo ordenamdo de mauor a menor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}