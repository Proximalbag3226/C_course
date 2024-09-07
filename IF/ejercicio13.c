//Encontrar el maximo de 5 numeros dados 

#include <stdio.h>

int main(){


    int a,b,c,d,e,f,g,h,i,j,k;

    printf("Ingrese el valor del primer numero: ");
    scanf("%i", &a);
    printf("Ingrese el valor del segundo numero: ");
    scanf("%i", &b);
    printf("Ingrese el valor del tercer numero: ");
    scanf("%i", &c);
    printf("Ingrese el valor del cuarto numero: ");
    scanf("%i", &d);
    printf("Ingrese el valor del quinto numero: ");
    scanf("%i", &e);


    f = a+b;
    g = a+c;
    h = a+d;
    i = a+e;
    j = f+g;
    k = h+i;


    if(j>k){
        if (b>c){
            printf("El numero mayor es %i", b);
        }
        else{
            printf("El numero mayor es %i", c);
        }
    }

    else{
        if(d>e){
            printf("El numero mayor es %i", d);
        }
        else{
            printf("El numero mayor es %i", e);
        }
    }
    return 0;
}