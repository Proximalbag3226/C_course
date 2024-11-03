//Suma pares desde n hasta m

#include <stdio.h>

//Creamos nuestra funcion main
int main() {
    
    //Declaramos variables n y m y la variable suma para almacenar la suma de los pares la cual vamos a inicializar en 0
    int n, m, suma = 0;

    //Pedimos al usuario ingresar los valores de n y m y los almacenamos en las variables correspondientes
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("Ingrese el valor de m: ");
    scanf("%d", &m);

    //Una pequeña validacion para que se cumpla el funcionamiento de nuestro programa en donde n tiene que ser mayor que m
    //En caso de que no se cumpla el programa termina
    if (n > m) {
        printf("Error: n debe ser menor o igual que m.\n");
        return 1;
    }

    //Saltando la validacion tenemos el ciclo que se encarga iterar por cada entero desde n hasta m
    for (int i = n; i <= m; i++) {

        //Si el numero es par, se suma a la variable suma
        if (i % 2 == 0) {
            suma += i;
        }
    }

    //Imprimimos la suma de los pares en el rango especificado por el usuario
    printf("La suma de los pares desde %d hasta %d es: %d\n", n, m, suma);

    return 0;
}