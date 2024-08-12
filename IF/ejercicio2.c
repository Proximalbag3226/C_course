//Comprobar si el numero ingresado por el usuario es positivo o negativo

#include <stdio.h>

int main(){
    float numero;
    printf("Ingrese un numero cualquiera ");
    scanf("%f",&numero);
    if (numero > 0){
        printf("El numero es positivo");
    }

    else if (numero <0){
        printf("El nuemero es negativo");
    }

    else if (numero == 0){
        printf("El numero es 0");
    };
    
    return 0;
}