#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Nodo {
    int dato;
    struct Nodo* sig;
} Nodo;

bool sonIdenticas(Nodo* A, Nodo* B) {       
    while (A != NULL && B != NULL) {
        if (A->dato != B->dato) {
            return false; 
        }
        A = A->sig;
        B = B->sig;
    }

    return (A == NULL && B == NULL);
}

void copiarLista(Nodo* A, Nodo** B) {
    *B = NULL; 
    Nodo* actualA = A;
    Nodo* ultimoB = NULL;

    while (actualA != NULL) {

        Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
        nuevoNodo->dato = actualA->dato;
        nuevoNodo->sig = NULL;

        if (*B == NULL) {
            *B = nuevoNodo;  
        } else {
            ultimoB->sig = nuevoNodo;
        }
        ultimoB = nuevoNodo;

        actualA = actualA->sig;
    }
}

void copiarListaInvertida(Nodo* A, Nodo** B) {
    *B = NULL; 
    Nodo* actualA = A;

    while (actualA != NULL) {

        Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
        nuevoNodo->dato = actualA->dato;

        nuevoNodo->sig = *B;
        *B = nuevoNodo;

        actualA = actualA->sig;
    }
}

void guardarListaEnArchivo(Nodo* A, const char* nombreArchivo) {
    FILE* archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    Nodo* actual = A;
    while (actual != NULL) {
        fprintf(archivo, "%d\n", actual->dato);
        actual = actual->sig;
    }

    fclose(archivo);
    printf("Lista guardada exitosamente en '%s'.\n", nombreArchivo);
}

float Promedio(Nodo * A){
    float suma = 0;
    float tamaño = 0;

    while (A != NULL) {
        suma = A->dato;
        A = A->sig;
        tamaño++;
    }
    float promedio = suma/promedio;
}

float Maximo(Nodo *A){
    float maximo = 0;
    while (A != NULL){
        if (A->dato >maximo){
            maximo = A->dato;
        }
        A = A->sig;   
    }
    printf("El maximo de la lista %f", maximo);
}

int Recursiva1(Nodo *A){
    if(A->sig = NULL){
        return 1;
    }
    return 1 + Recursiva1(A->sig);
}

