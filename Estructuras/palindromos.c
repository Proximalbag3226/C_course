#include <stdio.h>
#include <string.h>

typedef struct pila{
    char pil[50];
    int tope;
}pila;

pila * Iniciar_pila();
char Top(pila *pila);
void Push(pila *pila, char el);
void Pop(pila* pila);
int Palindromo(char *cadena, pila *pila);

int main(){
    char str[50];
    pila * cadena;
    cadena = Iniciar_pila();

    printf("Ingrese la palabra: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = "\0";

    Palindromo(str, cadena);
    
    return 0;
}

int Palindromo(char *cadena, pila * pila){
    int longitud = strlen(cadena);

    if (longitud <= 1){
        return 1;
    }

    for (int i = 0; i < longitud; i++){
        if (!isspace(cadena[i])){
            Push(pila, cadena[i]);
        }
    }

    int inicio = 0;
    int pal = 1;

    while (inicio<longitud){
        if (isspace(cadena[inicio])){
            inicio++;
            continue;
        }

        if (cadena[inicio] != Top(pila)){
            pal = 0;
            break;
        }
        inicio++;
        Pop(pila);
    }

    if (pal == 1){
        printf("Es palindromo\n");
    }
    else{
        printf("No es un palindromo\n");
    }

    return 0;
}

char Top(pila * pila){
    return pila->pil[pila->tope-1];
}

void Push(pila * pila, char el){
    pila->pil[pila->tope] = el;
    pila->tope = pila->tope+1;
}

void Pop(pila * pila){
    pila->tope = pila->tope-1;
}

pila * Iniciar_pila(){
    pila * pila;
    pila = malloc(100*sizeof(pila));
    pila->tope = 0;
    return pila;
}