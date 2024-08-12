//Calcular la raiz cuadrada de un numero y en caso de que dicho numero sea negativo se muestre que su raiz es imaginaria

#include <stdio.h>
#include <math.h>

int main(){
    int num;
    float raiz;
    printf("Ingrese el numero para calcular su raiz cuadrada: ");
    scanf("%i",&num);
    if(num>0){
        raiz= sqrt(num);
        printf("La raiz cuadrada de %i es %f",num,raiz);
    }
    else if (num<0){
        printf("La raiz cuadrada de %i es imaginaria", num);
    }
    return 0;
}