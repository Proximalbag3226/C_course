#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

typedef struct {
    int arr[SIZE];
    int top1; 
    int top2; 
} Bipila;


void inicializar(Bipila *bp) {
    bp->top1 = -1;
    bp->top2 = SIZE;
}

int estaLlenaPila1(Bipila *bp) {
    return bp->top1 == bp->top2 - 1;
}

int estaLlenaPila2(Bipila *bp) {
    return bp->top2 == bp->top1 + 1;
}

int estaLlenaBipila(Bipila *bp) {
    return bp->top1 == bp->top2 - 1; 
}

int estaVaciaPila1(Bipila *bp) {
    return bp->top1 == -1;
}

int estaVaciaPila2(Bipila *bp) {
    return bp->top2 == SIZE;
}

void pushPila1(Bipila *bp, int dato) {
    if (estaLlenaPila1(bp)) {
        printf("Error: La pila 1 está llena.\n");
        return;
    }
    bp->top1++;
    bp->arr[bp->top1] = dato;
    printf("Se insertó %d en la pila 1.\n", dato);
}

void pushPila2(Bipila *bp, int dato) {
    if (estaLlenaPila2(bp)) {
        printf("Error: La pila 2 está llena.\n");
        return;
    }
    bp->top2--;
    bp->arr[bp->top2] = dato;
    printf("Se insertó %d en la pila 2.\n", dato);
}

int popPila1(Bipila *bp) {
    if (estaVaciaPila1(bp)) {
        printf("Error: La pila 1 está vacía.\n");
        return 1; 
    }
    int dato = bp->arr[bp->top1];
    bp->top1--;
    return dato;
}

int popPila2(Bipila *bp) {
    if (estaVaciaPila2(bp)) {
        printf("Error: La pila 2 está vacía.\n");
        return 1;
    }
    int dato = bp->arr[bp->top2];
    bp->top2++;
    return dato;
}


int peekPila1(Bipila *bp) {
    if (estaVaciaPila1(bp)) {
        printf("Error: La pila 1 está vacía.\n");
        return 1; 
    }
    return bp->arr[bp->top1];
}


int peekPila2(Bipila *bp) {
    if (estaVaciaPila2(bp)) {
        printf("Error: La pila 2 está vacía.\n");
        return 1; 
    }
    return bp->arr[bp->top2];
}
