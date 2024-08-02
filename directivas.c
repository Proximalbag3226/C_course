//Directivas del preprocesador y variables 

//las directivas del preprocesador son las que contienen las librerias y las macros, un ejemplo de libreria seria #include<stdio.h>
//Las macros en este caso sirven para asginar un valor constante e inmutable

//Declarando una libreria
#include<stdio.h>

//Declarando un macro 
#define PI 3.1416

//Definimos una variable global
int y = 5;
int main(){
    //Declaracion de una variable de tipo entero y es una variable local 
    int x = 10;

    //declaramos una variable suma que inicializa en 0
    int suma = 0;

    //actualizamos la variable suma realizando la operacion correspondiente
    suma = PI +x;

    //Suma con decimaes 
    float suma1 = 0;

    suma1 = PI + x;

    printf("La suma es: %i", suma); //Declaramos el tipo de dato con el % por ejemplo en este caso al ser un int seria %i
    printf("La suma con decimales es:%f", suma1);

    return 0;
}