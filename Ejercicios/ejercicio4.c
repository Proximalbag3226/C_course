//Invierte los numeros de una serie de numeros dados para poder activar el portal 

#include <stdio.h>

int main(){
    int n, m, i, l, o;
    o = 0 ;
    i = 0;
    printf("Ingrese la cantidad de numeros que tiene el portal: ");
    scanf("%i", &n);
    l = n-1;
    int A[l];
    while (i<n){
        printf("Ingrese el numero: ");
        scanf("%i", &m);
        i++;
        A[l-i] = m;
        }
    
    while (o<n){
        printf("\nEl numero del portal es %i", A[o]);
        o++;
    }
    return 0;
}