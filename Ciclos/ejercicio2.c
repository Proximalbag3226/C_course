//Multiplos de 3 desde 1 hasta n

//Inlcuimos la biblioteca
#include <stdio.h>

//Funcion principal del programa
int main() {

    //Declaramos la variable n, pedimos al usuario un numero entero y lo almacenamos en la variable n
    int n;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    
    //Mostramos los multiplos de 3 desde 1 hasta n por medio de un ciclo que itera sobre todos los numeros enteros hasta el numero dado
    //Y si cumplen la condicion que son divisibles entre 3 sin residuos losd mostramos 
    printf("Multiplos de 3 desde 1 hasta %d:\n", n);
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0){
            printf("%d ", i);
        }
    }
    
    return 0;
}