#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    char *dato;
    struct Nodo* izquierda;
    struct Nodo* derecha;
};

struct Nodo* crearNodo(char* valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
}

struct Nodo* construirDesdeArreglo(char* arr[], int i, int n) {
    if (i >= n || arr[i] == NULL || arr[i][0] == '\0' || (arr[i][0] == ' ' && arr[i][1] == '\0')) return NULL;

    struct Nodo* nodo = crearNodo(arr[i]);
    nodo->izquierda = construirDesdeArreglo(arr, 2 * i + 1, n);
    nodo->derecha = construirDesdeArreglo(arr, 2 * i + 2, n);
    return nodo;
}

void recorrerInorden(struct Nodo* nodo) {
    if (nodo != NULL) {
        recorrerInorden(nodo->izquierda);
        printf("%s\n", nodo->dato);
        recorrerInorden(nodo->derecha);
    }
}

void clasificarAnimal(struct Nodo* nodo) {
    char respuesta[10];

    while (nodo != NULL) {
        if (nodo->izquierda == NULL && nodo->derecha == NULL) {
            printf("Clasificación: %s\n", nodo->dato);
            return;
        }

        printf("¿%s? (s/n): ", nodo->dato);
        scanf("%s", respuesta);

        if (respuesta[0] == 's' || respuesta[0] == 'S') {
            nodo = nodo->izquierda;
        } else {
            nodo = nodo->derecha;
        }
    }

    printf("No se pudo clasificar.\n");
}

char *clasificacion[] = {
    "Animal", "Vertebrados", "Invertebrados", "Escamas", "No escamas", "Patas articuladas", "Cuerpo duro", "Reptil", "Pez", "Solo terrestre", "Anfibio",
    "Caparazon duro", "Numero de patas", "Equinodermos", "Concha interna o externa", "Patas", "Serpiente", "Oseos", "Cartilaginosos", "Plumas", "Pelaje", "Cola", "Sin cola",
    "Crustaceo", " ", "6 Insecto", "8 aracnido", " ", " ", "Anelido", "Molusco", ""
};

int main() {
    int n = sizeof(clasificacion) / sizeof(clasificacion[0]);
    struct Nodo* raiz = construirDesdeArreglo(clasificacion, 0, n);

    printf("Clasificador de animales:\n");
    clasificarAnimal(raiz);

    return 0;
}