//Determinar si un numero es par o impar 

#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i",&numero);
    if(numero%2 == 0 ){
        printf("El numero es par");
    }
    else if (numero == 0){
        printf("El numero es 0");
    }
    
    else{
        printf("El numero es impar");
    }

    return 0;
}