//Pedir dos numeros al usuario, sumarlos, restarlos, multiplicarlos y dividirlos 

#include<stdio.h>

int main(){

    //Declaramos las variables que vamos a utilizar 
    int num1;
    int num2;
    int resultado;

    //Con el printf mostramos en consola los datos que vamos a solicitar y despues los recibimos y almacenamos en sus respectivas variables
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    //Realizamos las operaciones aritmeticas y mostramos sus resultados en consola 
    resultado = num1+ num2;
    printf("La suma de sus numeros es: %i",resultado);
    resultado = num1-num2;
    printf("La resta de sus numeros es: %i",resultado);
    resultado = num1*num2;
    printf("La multiplicacion de sus numeros es: %i",resultado);
    resultado = num1/num2;
    printf("La division de sus numeros es: %i",resultado);
    return 0;
}