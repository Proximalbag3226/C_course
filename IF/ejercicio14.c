//Encontrar el mayor de 3 numeros e imprimir en order de mayor a menor los numeros 

//Importamos la biblioteca de stdio.h 
#include <stdio.h>


//Creamos nuestro funcion main
int main(){

    //Creamos las variables de tipo entero que vamos a utilizar
    int a,b,c;

    //Pedimos e igresamos por consola los valores de los numeros para almacenarlos dentro de las variables 
    printf("Ingrese el valor del primer numero: ");
    scanf("%i",&a);
    printf("Ingrese el valor del segundo numero: ");
    scanf("%i",&b);
    printf("Ingrese el valor del tercer numero: ");
    scanf("%i",&c);

    //Creamos el primer bloque de condicion
    if(a>b){

        //El segundo, anidado dentro del primero
        if(b>c){
            printf("El numero mas grande es %i ", a);
            printf("El numero de enmedio es %i ", b);
            printf("El numero mas pequeño es %i ", c);
        }
        //El tercero, anidado dentro del primero
        if(c>a){
            printf("El numero mas grande es %i ", c);
            printf("El numero de enmedio es %i ", a);
            printf("El numero mas pequeño es %i ", b);
        }
    }

    //El caso 2
    else{

        //El cuarto, anidado dentro del segundo
        if(a>c){
            printf("El numero mas grande es %i ", b);
            printf("El numero de enmedio es %i ", a);
            printf("El numero mas pequeño es %i ", c);
        }

        //El quinto anidado dentro del segudno
        if(c>b){
            printf("El numero mas grande es %i ", c);
            printf("El numero de enmedio es %i ", b);
            printf("El numero mas pequeño es %i ", a);
        }
    }
    
}