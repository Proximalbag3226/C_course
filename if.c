//Sentencia if en C, if es una sentencia de condicional, esto quiere decir que va a verifcar una condcion dada que propongamos para la ejecucion del programa 
//En el lenguaje C se utiliza de la siguiente manera 

//Prueba de divisibilidad 
#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite el primer numero: ");
    scanf("%i",&n1);
    printf("Digite el segundo numero:");
    scanf("%i",&n2);

    if (n1%n2 == 0){
        printf("El numero %i es divisible entre %i sin residuos", n1, n2);
    }
    return 0;
}