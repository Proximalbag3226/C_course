#include <stdio.h>

int Ternaria(int arr[], int obj, int inicio, int fin);

int main() {
    int arr[] = {2, 5, 7, 10, 14, 20, 25, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int obj;
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &obj);

    int resultado = Ternaria(arr, obj, 0, n-1);

    if (resultado != -1) {
        printf("Elemento %d encontrado en la posicion %d\n", obj, resultado);
    } else {
        printf("Elemento %d no encontrado en el arreglo\n", obj);
    }

    return 0;
}

int Ternaria(int arr[], int obj, int inicio, int fin){
    if (fin >= inicio){
        int punto1 = inicio + (fin-inicio) / 3;
        int punto2 = fin -  (fin-inicio) / 3;

        if (arr[punto1] == obj){
            return punto1;
        }
        if (arr[punto2] == obj){
            return punto2;
        }
        if (obj < arr[punto1]){
            return Ternaria(arr, obj, inicio, punto1-1);
        }
        else if (obj > arr[punto2]){
            return Ternaria(arr, obj, punto2+1, fin);
        }
        else{
            return Ternaria(arr, obj, punto1+1, punto2-1);
        }
    }
    return -1;
}

