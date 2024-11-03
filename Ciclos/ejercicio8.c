//Dar la n cantidad de numeros de la serie de fibonacci 

#include <stdio.h>

//Funcion principal que genera la serie de fibonacci
int main(){

    //Declaramos las variables que vamos a utilizar 
    //Num para almacenar el numero de los n caracteres de la serie de fibonacci
    //i para el contador
    //x, y y z para los tres numeros de la serie de fibonacci
    //Inicializamos x, y y z con los primeros valores de la serie de fibonacci (0 y 1)
    int num, i, x = 0, y = 1, z =1;

    //Pedimos al usuario la cantidad de numeros de la serie de fibonacci a generar
    //Almacenar en num 
    printf("Ingrese la cantidad de numeros de la serie de Fibonacci: ");
    scanf("%d", &num);
    
    //Con un ciclo realizamos fibonacci
    for (i = 1; i <= num; i++){

        //Una serie esta compuesta por los dos anteiores a el en este caso al z valer 1 vamos a obtenerlo con la suma de sus 2 ateriores
        //A cada iteracion vamos almacenando el numero siguiente en z
        //Y los anteriores en x y y
        z = x+y;
        x = y;
        y = z;

        //Imprimimos cada termino 
        printf("%i, ", z);
    }

    return 0;
}