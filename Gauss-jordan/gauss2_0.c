//Metodo de gauss-jordan para resolucion de sistemas de ecuaciones de nxn

#include <stdio.h>
#include <stdlib.h>

void print_matrix(int n, double **matrix) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprimir_resultados(double *independientes, int n){
    printf("Resultados:\n");
    for (int i = 0; i < n; i++) {
        printf("x%d = %.2f\n", i + 1, independientes[i]);
    }
}


void cargar_datos(double **matrix, double *independientes, int n, int m){
    printf("Ingrese los coeficientes de las ecuaciones:\n");
    //Dentro del primer ciclo for se solicitaran los valores de los coeficinetes de las varibales por filas y columnas
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("Ingrese los coeficientes de las varialbes: ");
            scanf("%lf", &matrix[i][j]);
        }
    }

    //Dentro del segundo ciclo for se solicitaran los valores de la variable independiente guardandonse en el vector de 3 dimensiones
    for (int i = 0; i < n; i++){
        printf("Ingrese el valor de la variable independiente: ");
        scanf("%lf", &independientes[i]);
    }
}

double ** reservar_memoria(int n){
    double **matrix = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double *)malloc((n + 1) * sizeof(double));
    }
    return matrix;
}

void gauss_jordan(double ** matrix, double *independientes, int n){

    //Vamos a volver todos los elementos de tipo matrix[i][i] 1 es decir la diagonal mayor tiene que ser igual a 1
    for (int i = 0; i < n; i++) {

        //Para eso vamos a iterar sobre cada elemento de la diagonal
        double pivote = matrix[i][i];
        if (pivote == 0){
            printf("La matriz no tiene solución única.");
            return;
        }
        
        //Vamos a volver 1 ese elemento, lo que en otros terminos se refiere a dividir toda esa entre el valor de nuestro elemento
        //De la diagonal, incluido el valor del vector asignado a dicha fila 
        for (int j = 0; j < n; j++) {
            matrix[i][j] /= pivote;
        }

        independientes[i] /= pivote;
        
        //Ahora vamos a eliminar los otros elementos de la columna de nuestro elemento de la diagonal lo que se refiere a realizar 
        //Una multiplicacion y posteriormente una resta a los elementos de la columna
        for (int j = 0; j < n; j++) {
            if (j!= i) {
                double elemento = matrix[j][i];
                for (int k = 0; k < n; k++) {
                    matrix[j][k] -= matrix[i][k] * elemento;
                }
                
                independientes[j] -= independientes[i] * elemento;
            }
        }
    }
    
    //Finalmente tenemos que imprimir los resultados que estan almacenados en nuestro vector 
    imprimir_resultados(independientes, n);
}