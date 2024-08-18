//La sentencia switch la tenemos como un condicional para multiples casos, lo cual seria lo ideal a utilizar en caso de tener mas de 3 casos 
//A diferenncia de sus hermanos condicionales este solo aceptara por condicion un nunmero entero o un dato de tipo char 

//Su sintaxis es parecida al sigueinte ejemplo 

/*
switch (selector){
case etiqueta1: sentencia1; break; 
case etiqueta2: sentencia2; break;
case etiqueta3: sentencia3; break;
case etiqueta4: sentencia4; break;
default: sentencia;
}
*/

//Ejemplo de uso 

#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese un numero del 1 al 3: ");
    scanf("%i", &numero);
    switch (numero)
    {
    case 1:
    printf("El numero precionado es 1");
    break;
    case 2:
    printf("El numero precionado es 2 ");
    break;
    case 3:
    printf("El numero precionado es 3 ");
    break;
    default: printf("Numero incorrecto");
        break;
    }
}