//Hacer una arbol con "*" con el numero de filas dado

#include <stdio.h>

//Creamos nuestra funcion main 
int main(){

    //Declaramos las variables para el numero de filas y iteraciones
    int n, i, j, k;

    //Pedimos al usuario el numero de filas y lo almacenamos en la variable n
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    
    //Creamos un primer ciclo para controlar la cantidad de filas del arbol
    for (i = 1; i <= n; i++){

        //Dentro del segundo ciclo vamos a controlar la cantidad de espacios nesesarios que va a seguir hasta
        //El numero de filas - 1 iniciando por 1 
        for (j = 1; j <= n - i; j++){
            printf(" ");
        }

        //Dentro del tercer ciclo vamos a imprimir los asteriscos que formaran la estructura del arbol
        for (k = 1; k <= 2 * i - 1; k++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
