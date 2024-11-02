//EL otro ciclo del que disponemos en C ademas de while es el for el cual podemos utilizar para de igual manera "reoetir"
//Pedazos de nuestro codigo, pero a diferencia de while, este es 1 a 1; es decir que tenemos en parte mas control ya que dentron de 
//La misma declaracion de la sentencia del ciclo podemos incluir cuandtas condiciones se nesesite, a diferencia del while que estrictamente hablando
//Solo puede contener una condicion dentro, for nos permite tener este control en caso de tener eventos que necesitemos detectar 
//En cada iteracion 

//La sintaxis del for en C es la siguiente 

/*

Se empieza por declarar el ciclo con la palabra reservada "for" adelante de ella tenemos las condiciones del ciclo
Primeramente, la declaracion explicita del valor de i, para este ejemplo i = 0, depues de ello vendria la condicion que queremos 
La cual es que i sea menor que count, en este apartado podemos incluir mas condiciones todas ellas separadas por una coma o en todo 
Caso utilizando los operadores logicos and y or, por ultimo vendria el aumento de la variable en iteracion delcarado como i++.
for (size_t i = 0; i < count; i++)
{
    code
}
*/

//En un ejemplo practico de esta parte tenemos el siguiente fragmento de codigo 

//Incluimos la biblioteca que vamos a utilizar para la salida de parametros en consola 
#include <stdio.h>

//Declaramos nuestra funcion main
int main(){

//Declaramos las variables que vamos a utilizar
    int i, count;

    //Asigamos un valor cualquiera a una de ellas 
    count = 5;

//Iniciamos el ciclo con las condiciones ya contenidas y la declaracion de la variable itareadora comenzando en 0
    for (i = 0; i < count; i++)
    {

        //El codigo que se repetira por n iteraciones dependiendo de las condiciones del ciclo
        printf("\nHello world");
    }
    
}