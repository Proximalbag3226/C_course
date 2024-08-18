//Una distribuidora de motocicletas tiene una promocion de fin de año que consiste en lo siguiente: las moto marca honda tienen un descuento de 5%
//Las marca yamaha tienen un descuento del 8%, las suzuki del 10% y las otras de 2%

#include <stdio.h>
#define Honda 0.05;
#define Yamaha 0.08
#define Suzuki 0.1

int main(){
    char marca[15];
    float precio, precio_final;
    printf("Ingrese la marca de la moto: ");
    gets(marca);
    printf("Ingrese el precio de la moto: ");
    scanf("%f",&precio);
    
    if(strcmp(marca, "honda")==0){
        precio_final = precio * Honda;
        printf("El precio de la moto es de: %f", precio_final);
    }
    else if (strcmp(marca, "yamaha")==0){
        precio_final = precio * Yamaha;    
        printf("El precio de la moto es de: %f", precio_final);
    }
    else if (strcmp(marca, "suzuki")==0){
        precio_final = precio *Suzuki;
        printf("El precio final de la moto es de: %f", precio_final);
    }
    else{
        precio_final = precio * 0.02;
        printf("El precio final de la motodo es de: %f", precio_final);
    }
    
    return 0;
}