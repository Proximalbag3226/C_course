#include <stdio.h>
#include <math.h>

int fibo_n(int n);

int main(){
    int numero, parar, resultado;
    parar = 1;
    while (parar){
        printf("Ingrese un numero positivo n para calcular la serie de fibonacci: ");
        scanf("%i", &numero);
        if (numero<=0){
            printf("Debe ser un numero con valor positivo, vuelva a intentar.");
            continue;
        }
        else{
            resultado = fibo_n(numero);
            printf("El numero de fibonacci en la posicion %i es: %i", numero, resultado);
        }
        printf("Desea continuar(1/0)?");
        scanf("%i", &parar);
        if (parar == 1){
            continue;
        }
        else if (parar == 0){
            break;
        }
        else{
            printf("Opcion incorrecta");
            break;
        }
    }
    return 0;
}

int fibo_n(int n){
    int numero_n;
    numero_n = (1/sqrt(5))*((pow((1+sqrt(5)/2), n))-(pow((1-sqrt(5)/2), n)));
}