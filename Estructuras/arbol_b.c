#include <stdio.h>

struct Nodo{
    char *dato;
    struct Nodo* izquierda;
    struct Nodo* derecha;    
};

struct Nodo* crearNodo(int valor) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->derecha = NULL;
    return nuevoNodo;
};

char *clasificacion[] = {
    "Animal", "Vertebrados", "Invertebrados", "Escamas", "No escamas", "Patas articuladas", "Cuerpo duro", "Reptil", "Pez", "Solo terrestre", "Anfibio", 
    "Caparazon duro", "Numero de patas", "Equinodermos", "Concha interna o externa", "Patas", "Serpiente", "Oseos", "Cartilaginosos", "Plumas", "Pelaje", "Cola", "Sin cola",
    "Crustaceo", " ", "6 Insecto", "8 aracnido", " ", " ", "Anelido", "Molusco", ""
};