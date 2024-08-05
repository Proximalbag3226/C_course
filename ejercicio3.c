//Realizar el teorema de pitagoras solicitando al usuario el valor de los dos catetos 

#include<stdio.h>
#include<math.h>

int main(){
    float c1;
    float c2;
    float hipotenusa;
    printf("Ingrese el valor del primer cateto: ");
    scanf("%f",&c1);
    printf("Ingrese el valor del segundo cateto: ");
    scanf("%f",&c2);
    hipotenusa = sqrt((c1*c1)+(c2*c2));
    printf("El valor de la hipotenusa es de: %f", hipotenusa);

}