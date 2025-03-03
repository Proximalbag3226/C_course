//Vamos a implementar el ordenamiento por seleccion en c, este algoritmo consiste en encontrar el numero menor de nuestro arreglo y despues de encontrarlo 
//Vamos a moverlo a la izquierda dentro del arreglo hasta que encuentre su lugar 

#include "stdio.h"

int main(){

    int A[] = {4,2,5,3,1};
    int tam = sizeof(A) / sizeof(A[0]);

    int menor, aux, i, j;

    for (i = 0; i < tam-1; i++){
        menor = i;
        for (j = 0; j < tam; j++){
            if(A[j] < A[menor]){
                menor = j;
            }
        }

        aux = A[i];
        A[i] = A[menor];
        A[menor] = aux;
    }
    

    return 0;

}