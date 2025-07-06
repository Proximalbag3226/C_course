#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

typedef struct Nodo {
    char *dato;
    struct Nodo *siguiente;
} Nodo;

typedef Nodo* Lista;

Nodo* crear_nodo(const char *valor) {
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

void Carrusel(Lista *lista) {
    if (*lista == NULL) return;
    Nodo* actual = *lista;
    int resultado;
    char comando[100];

    while (1) {
        printf("\nComando actual: %s\n", actual->dato);
        printf("Accion a realizar:\n");
        printf("1) Ejecutar comando\n");
        printf("2) Siguiente comando\n");
        printf("3) Agregar comando\n");
        printf("4) Eliminar comando\n");
        printf("5) Terminar\n");
        printf("Seleccione opcion: ");
        if (scanf("%d", &resultado) != 1) {
            while (getchar() != '\n');
            printf("Entrada invalida.\n");
            continue;
        }
        getchar();

        if (resultado == 1) {
            printf("Ejecutando: %s\n", actual->dato);
            int res = system(actual->dato);
            if (res != 0) {
                printf("Error al ejecutar el comando.\n");
            }
        } else if (resultado == 2) {
            actual = actual->siguiente;
        } else if (resultado == 3) {
            printf("Ingrese el nuevo comando: ");
            fgets(comando, sizeof(comando), stdin);
            comando[strcspn(comando, "\n")] = '\0';
            Insertar(lista, comando);
        } else if (resultado == 4) {
            printf("Ingrese el comando a eliminar: ");
            fgets(comando, sizeof(comando), stdin);
            comando[strcspn(comando, "\n")] = '\0';
            Eliminar(lista, comando);
            if (*lista == NULL) {
                printf("Lista vacia. Terminando carrusel.\n");
                break;
            }
            actual = *lista;
        } else if (resultado == 5) {
            printf("Saliendo del carrusel.\n");
            break;
        } else {
            printf("Opcion no válida.\n");
        }
    }
}

int main() {
    Lista miLista = lista_crear();
    Insertar(&miLista, "mkdir carpeta_nueva");
    Insertar(&miLista, "rmdir carpeta_nueva");
    Insertar(&miLista, "ipconfig");
    Insertar(&miLista, "tasklist");
    Insertar(&miLista, "cls");

    Carrusel(&miLista);

    return 0;
}
