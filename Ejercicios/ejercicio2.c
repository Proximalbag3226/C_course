//Se debe determinar la piedra mas poderosa entre n cantidad de piedras dadas 

#include <stdio.h>

int main(){
    int a,n,m,i;
    i = 0;
    m = 0;
    printf("Ingrese la cantidad de piedras: ");
    scanf("%i", &n);
    while (i<n){
        printf("Ingrese el valor de la piedra: ");
        scanf("%i", &a);
        if(a>m){
            m = a;
        }
        i++;
    }
    printf("La piedra con mayor poder es: %i", m);

    return 0;
}