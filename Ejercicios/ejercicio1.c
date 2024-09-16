//En una tierra lejana se descubre un cofre con monedas de oro para las cuales solo las que tienen impreso un valor par 
//Son las de importancia para el reino 

#include <stdio.h>

int main(){
    int i,n,m,suma;
    printf("Ingrese el numero de monedas encontradas: ");
    scanf("%i", &n);
    i = 0;
    suma = 0;
    while (i<n){
        printf("Ingrese el valor de la moneda: ");
        scanf("%i",&m);
        if(m%2 == 0){
            suma = suma + m;
        }
        i++;
    }
    printf("La suma del valor de las monedas es: %i",suma);

    return 0;
}