#define max_size 100

typedef struct conjuntos{
    int elementos[max_size];
    int num_elementos;
};

void iniciar_conjunto(conjuntos *A);
void agregarElementos(conjuntos *A, int e);
void eliminarElementos(conjuntos *A, int e);
void imprimirConjunto(conjuntos *A);