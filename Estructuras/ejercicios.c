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

float sonIdenticas(Nodo* A) {
    Nodo* actual = A;
    float promedio;
    while (actual != NULL) {
        
    }
    
}
