//Se tiene una tienda que ofrece el 15% de descuento sobre su compra 

#include<stdio.h>
#define Descuento 0.15

int main(){
    float total_compra, precio_final;
    printf("Ingrese el precio total de su compra: ");
    scanf("%f",&total_compra);
    precio_final = total_compra * Descuento;
    printf("El precio final de su compra es de: %f", precio_final);
}
