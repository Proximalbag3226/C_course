//Segun los datos de la factura de la luz calcular el precio, para un gasto menor de 1000kw la tarifa es de 1.2, entre 1000kw y 1850kw es de 1 y mayor a 1850kw
//La tarifa es de 0.9

#include <stdio.h>
#define Tarifa1 1.2
#define Tarifa2 1
#define Tarifa3 0.9

int main(){
    int kw;
    float precio;
    printf("Ingrese la cantidad de kw gastados: ");
    scanf("%i", &kw);
    if(kw < 1000){
        precio = Tarifa1;
        printf("El costo de su recibo de luz es de: %f", precio);
    }
    else if (1000 < kw <1850){
        precio = Tarifa2;
        printf("El costo de su recibo de luz es de: %f", precio);
    }
    else if (precio > 1850){
        precio = Tarifa3;
        printf("El costo de su recibo de luz es de: %f", precio);
    }
    
    return 0;
}