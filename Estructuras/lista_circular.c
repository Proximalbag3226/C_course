#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

typedef struct Nodo {
    char *dato; 
    struct Nodo *siguiente;
} Nodo;

typedef Nodo* Lista;

Nodo* crear_nodo(char *valor) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (!nuevo) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
    nuevo->dato = strdup(valor);
    nuevo->siguiente = NULL;
    return nuevo;
}

Lista lista_crear() {
    return NULL;
}

void Insertar(Lista* lista, const char *valor) {
    Nodo* nuevo = crear_nodo(valor);
    if (*lista == NULL) {
        *lista = nuevo;
        nuevo->siguiente = nuevo;
    } else {
        Nodo* temp = *lista;
        while (temp->siguiente != *lista) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
        nuevo->siguiente = *lista;
    }
}

void Eliminar(Lista* lista, const char *valor) {
    if (*lista == NULL) return;

    Nodo* actual = *lista;
    Nodo* anterior = NULL;

    do {
        if (strcmp(actual->dato, valor) == 0) {
            if (actual == actual->siguiente) {
                free(actual->dato);
                free(actual);
                *lista = NULL;
                return;
            } else {
                if (actual == *lista) {
                    Nodo* temp = *lista;
                    while (temp->siguiente != *lista) {
                        temp = temp->siguiente;
                    }
                    temp->siguiente = (*lista)->siguiente;
                    Nodo* eliminar = *lista;
                    *lista = (*lista)->siguiente;
                    free(eliminar->dato);
                    free(eliminar);
                } else {
                    anterior->siguiente = actual->siguiente;
                    free(actual->dato);
                    free(actual);
                }
                return;
            }
        }
        anterior = actual;
        actual = actual->siguiente;
    } while (actual != *lista);
}

void Imprimir(Lista lista) {
    if (lista == NULL) {
        printf("Lista vacía.\n");
        return;
    }
    Nodo* temp = lista;
    do {
        printf("%s -> ", temp->dato);
        temp = temp->siguiente;
    } while (temp != lista);
    printf("(inicio)\n");
}

void Carrusel(Lista lista) {
    if (lista == NULL) return;
    Nodo* actual = lista;
    int resultado;
    while(1){
        printf("¿Desea continuar?");
        scanf("%i", &resultado);
        if (resultado == 1) {    
            printf("Ejecutando comando: %s\n", actual->dato);
            int res = system(actual->dato);
            if (res != 0) {
                printf("Error al ejecutar el comando.\n");
            }
            actual = actual->siguiente;
        } else break;
    }
}

int main() {
    Lista miLista = lista_crear();

    Insertar(&miLista, "Ana");
    Insertar(&miLista, "Luis");
    Insertar(&miLista, "Carlos");
    Insertar(&miLista, "Beatriz");

    printf("Lista después de insertar:\n");
    Imprimir(miLista);

    Eliminar(&miLista, "Luis");
    printf("\nLista después de eliminar 'Luis':\n");
    Imprimir(miLista);

    Eliminar(&miLista, "Ana");
    Eliminar(&miLista, "Carlos");
    Eliminar(&miLista, "Beatriz");

    printf("\nLista después de eliminar todo:\n");
    Imprimir(miLista);
    Insertar(&miLista, "mkdir carpeta_nueva");
    Insertar(&miLista, "rmdir carpeta_nueva");
    Insertar(&miLista, "mkdir carpeta_nueva");
    Insertar(&miLista, "rmdir carpeta_nueva");
    Insertar(&miLista, "ipconfig");
    Insertar(&miLista, "tasklist");
    Insertar(&miLista, "cls");
    Carrusel(miLista);
    return 0;

}

