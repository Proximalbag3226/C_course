//En un mundo donde los numeros son juzgados por su valor, donde los numeros negativos son villanos, los 0 son neutrales
//Y los numeros positvos con heroes, encontrar la cantidad todal de heroes villanos y neutrales 

#include <stdio.h>

int main(){
    int i, n, m, villanos, neutrales, heroes;
    i = 0;
    villanos = 0;
    neutrales = 0;
    heroes = 0;
    printf("Ingrese la cantidad de numeros a evaluar: ");
    scanf("%i", &n);
    while (i<n){
        printf("Ingrese el valor del numero a juzgar: ");
        scanf("%i", &m);
        if(m<0){
            villanos += 1;
            i++;
        }
        else if (m>0){
            heroes += 1;
            i++;
        }
        else{
            neutrales += 1;
            i++;
        }
    }
    printf("La cantidad de villanos es %i, la cantidad de neutrales es %i, y la cantidad de heores es %i", villanos, neutrales, heroes);

    return 0;
}