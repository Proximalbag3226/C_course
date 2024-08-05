//Operadores de asignacion

#include<stdio.h>

int main(){

    //De esta manera podemos asignar los valores a una variable 
    int a;
    a = 10;
    printf("El valor de a es %i", a);

    //De igual manera se puede realiazr una asignacion multiple de la siguiente manera 
    int b,c,d;
    b=c=d=20;
    printf("El valor de b,c,d es de: %i %i %i",b,c,d);

    //Cambiamos el valor de una variable, en este caso de a
    a = a+15;
    printf("El nuevo valor de a es %i",a);

    //De igual manera para "abreviar" lo anterior podemos utilizar el siguiente operador de asignacion
    a += 10;
    printf("El nuevo valor de a es %i",a);

    //De igual manera se puede utilizar para los diferentes operadores aritmeticos, en este caso resta
    a -= 10;
    printf("El nuevo valor de a es %i",a);

    //Multiplicacion
    a *= 2;
    printf("El nuevo valor de a es %i",a);

    //Division
    a/= 2;
    printf("El nuevo valor de a es %i", a);
    return 0;
}