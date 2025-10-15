#include <stdio.h>

int euclides(int a, int b);

int main(){
    int a,b, resultado;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    resultado = euclides(a,b);
    printf("El resultado es: %d", resultado);
}

int euclides(int a,int b){
    int resto;
    while (1){
        resto = a % b;
        if (resto == 0){
            return b;
        }
        else{
            a = b;
            b = resto;
        }
        
    }
    
}