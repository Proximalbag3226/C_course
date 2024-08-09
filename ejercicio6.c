//Calcular la media aritmetica de 3 numeros cualesquiera que sean 

#include<stdio.h>

int main(){
    float a,b,c, promedio;
    printf("Ingrese el primer numero: ");
    scanf("%f",&a);
    printf("Ingrese el segundo numero:");
    scanf("%f",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%f",&c);
    promedio = (a+b+c)/3;
    printf("El promedio de los 3 numeros es: %f", promedio);
}