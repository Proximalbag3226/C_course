//Metodo de gauss-jordan para resolucion de sistemas de ecuaciones de 3x3 

#include <stdio.h>
#include <stdlib.h>

//Nuestra priera funcion se va a encargar de imprimir la matriz que reciba 
void imprimir_matrix(double matrix[3][3]);

//Nuestra segunda funcion se encargará de cargar los datos en la matriz y los valores independientes dentro de un vector de 3 dimensiones
void cargar_datos(double matrix[3][3], double independientes[3]);

//Nuestra tercera función se encargará de imprimir los resultados después de la resolución del sistema de ecuaciones
void imprimir_resultados(double independientes[3]);

//Nuestra cuarta función se encargará de resolver el sistema de ecuaciones utilizando el método de Gauss-Jordan
void gauss_jordan(double matrix[3][3], double independientes[3]);

//Todas nuestras funciones recibiran como argumentos una matriz de 3x3 y un vector de 3 dimensiones sea el caso que corresponda 


//En el main tenemos ya la implementacion de nuestras funciones
int main() {
    double matrix[3][3];
    double independientes[3];
    cargar_datos(matrix, independientes);
    printf("La matriz original es: \n");
    imprimir_matrix(matrix);
    printf("\n");
    gauss_jordan(matrix, independientes);
    return 0;
}

//Por medio de dos ciclos for vamos a ir imprimiendo la matriz por filas y columndas
void imprimir_matrix(double matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
}

//Para cargar los datos
void cargar_datos(double matrix[3][3], double independientes[3]){
    printf("Ingrese los coeficientes de las ecuaciones:\n");

    //Dentro del primer ciclo for se solicitaran los valores de los coeficinetes de las varibales por filas y columnas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("Ingrese los coeficientes de las varialbes: ");
            scanf("%lf", &matrix[i][j]);
        }
    }

    //Dentro del segundo ciclo for se solicitaran los valores de la variable independiente guardandonse en el vector de 3 dimensiones
    for (int i = 0; i < 3; i++){
        printf("Ingrese el valor de la variable independiente: ");
        scanf("%lf", &independientes[i]);
    }
}

//Por medio de dos ciclos for vamos a imprimir los resultados que se van a almacenar en el vector de 3 dimensiones
void imprimir_resultados(double independientes[3]){
    printf("Resultados:\n");
    printf("x = %.2f\ny = %.2f\nz = %.2f\n", independientes[0], independientes[1], independientes[2]);
}


//Y la logica mas imporntate es la de la resolucion por Gauss-Jronda
void gauss_jordan(double matrix[3][3], double independientes[3]){

    //Vamos a volver todos los elementos de tipo matrix[i][i] 1 es decir la diagonal mayor tiene que ser igual a 1
    for (int i = 0; i < 3; i++) {

        //Para eso vamos a iterar sobre cada elemento de la diagonal
        double pivote = matrix[i][i];
        if (pivote == 0){
            printf("La matriz no tiene solución única.");
            return;
        }
        
        //Vamos a volver 1 ese elemento, lo que en otros terminos se refiere a dividir toda esa entre el valor de nuestro elemento
        //De la diagonal, incluido el valor del vector asignado a dicha fila 
        for (int j = 0; j < 3; j++) {
            matrix[i][j] /= pivote;
        }
        independientes[i] /= pivote;
        
    //Ahora vamos a eliminar los otros elementos de la columna de nuestro elemento de la diagonal lo que se refiere a realizar 
    //Una multiplicacion y posteriormente una resta a los elementos de la columna
    for (int j = 0; j < 3; j++) {
        if (j!= i) {
            double elemento = matrix[j][i];
            for (int k = 0; k < 3; k++) {
                matrix[j][k] -= matrix[i][k] * elemento;
            }
            independientes[j] -= independientes[i] * elemento;
        }
    }
    }
    
    //Finalmente tenemos que imprimir los resultados que estan almacenados en nuestro vector 
    imprimir_resultados(independientes);
}