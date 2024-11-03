//Crear un programa que sume los n primeros numeros 

//Incluimos la biblioteca nesesaria
#include <stdio.h>

//Creamos nuestro metodo main
int main() {

    //Declaramos nuestro numero n y la suma
    int n, suma = 0;

    //Pedimos al usuario que ingrese un numero n y lo almacenamos en n
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    //Creamos un ciclo para iterar sobre los elementos iguales o anteiores al numero ingresado por el usuario 
    //Y vamos sumando cada uno de estos elementos a nuestra variable suma 
    for (int i = 1; i <= n; i++){
        suma += i;
    }

    //Mostramos el resultado en pantalla
    printf("La suma de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}