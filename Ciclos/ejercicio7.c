//Calcular la suma de factoriales

//Para este ejercicio no vamos a ocupar el metodo tradicional de incluir todo en la funcion main 
//Nos vamos a apoyar del uso de la recursion de funciones, que en terminos simples es ejecutar la funcion 
//Dentro de ella misma

#include <stdio.h>

//Aqui vamos a declarar nuestra funcion factorial, que se va a encargar de calcular el factorial de un numero que realiza en si 
//El mismo proceso que en el ejercicio 6
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


//Ahora dentro de nuestra funcion main
int main() {

    //Declaramos una variable para almacenar el numero de elementos que deseamos sumar
    int n, suma = 0;

    //Pedimos al usuario que ingrese un numero entero y almacenamos en nuestra variable 
    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    //Chequeamos que el numero ingresado sea mayor a 0, en caso contrario mostramos un mensaje y salimos del programa
    if (n<0) {
        printf("Ingrese un numero mayor a 0.\n");
        return 1;
    }

    //Con un ciclo for vamos a llamar a la funcion factorial y vamos a realizar a suma de los resultados que obtengamos 
    for (int i = 1; i <= n; i++) {
        suma += factorial(i);
    }
    
    //Mostramos la suma de los factoriales
    printf("La suma de los factoriales de los primeros %d números enteros es: %d\n", n, suma);
}