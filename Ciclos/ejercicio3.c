//Suma de tipo n-n+1+n+2-n+3...n+n
//En otras palabras la suma de los enteros impares postivos y los pares negativos 

#include <stdio.h>

//Creamos nuestra funcion principal
int main() {

    //Declaramos las variables
    int n, i, suma, suma_pares,  suma_impares, ne;

    //Pedimos al usuario que ingrese un número entero positivo y lo almacenamos en la varaible n 
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    //Inicializamos las variables en 0
    suma = suma_impares = suma_pares = 0;

    //Creamos un ciclo que va a recorrer desde 1 hasta el n que hayamos recibido del usuario 
    for (i = 1; i <= n; i++){

        //Si cumple la condicion de ser un numero par, lo sumamos a la variable de suma de pares pero primero vamos a 
        //Convertirlo en negativo 
        if (i % 2 == 0){
            ne = i * (-1);
            suma_pares  += ne;
        }

        //En caso contrario vamos a sumarlo a la variable de la suma de impares
        else{
            suma_impares = suma + i;
        }
    }

    //Terminado el ciclo vamos a realizar la suma total de pares e imapres
    suma = suma_pares + suma_impares;

    //Mostramos la suma al usuario
    printf("\nLa suma es: %d", suma);
    
    return 0;
}