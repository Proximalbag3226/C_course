//Calcular la media geometrica de 3 numeros dados

#include <stdio.h>
#include <math.h>

int main(){
    int num1,num2,num3;
    printf("Ingrese el primer numero: ");
    scanf("%i",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i",&num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i",&num3);
    float media = pow((num1*num2*num3),1.0/3);
    printf("La media geometrica de los 3 numeros que ingreso es: %f", media);

}