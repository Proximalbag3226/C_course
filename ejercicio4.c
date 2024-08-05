//Crear un programa que calcule las longitudes de circunferencias

#include<stdio.h>
#define PI 3.1416

int main(){
    float radio;
    float longitud;
    printf("Ingrese el radio de la circunferencia a calcular su longitud: ");
    scanf("%f",&radio);
    longitud = PI*(radio*2);
    printf("La longitud de la circunferencia es de: %f", longitud);
}