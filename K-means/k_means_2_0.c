//Importamos las librerias que vamos a utilizar dentro de nuestro programa
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Definimos las estructuras de datos a utilizar

int contador_componentes(){
    int num_componentes;
    return num_componentes;
}

//La primer estructura seran los puntos que en este caso tienen 4 dimensiones desde w hasta z
typedef struct { 
    float *componentes;
    int grupo;
} punto;

//La segunda seran los centros para cada conjunto de datos, estos igual con 4 dimensiones y un contandor de elementos 
typedef struct {
    float *componentes;
    int contador;
} centro;

//Las fucnioes que vasmo a utilizae dentro de nuestro programa 

//Calcular la distacia ecuclidiana entre los puntos y los centros
int distancia_cercana(punto* a, centro centros[], int num_centros);

//La funcion para poder asignar un centro a cada punto 
int asignar_centro(punto puntos[], int num_puntos, centro centros[], int num_centros);

//La funcion que vamos a utilizar para poder recalcular los centros
void recalcular_centro(punto puntos[], int num_puntos, centro centros[], int num_centros, int num_componentes);

//Con esta funcion vamos a crear los primeros 3 centros aleatorios 
void iniciar_centros(centro centros[], int num_centros, int num_componentes);

//Con esta funcion vamos a leer los datos del archivo de data iris 
void cargar_data(punto puntos[], int num_puntos);

//Por ultimo nuestra funcion main
int main() {

    //Declaramos la cantidad de puntos que tenemos al igual que la canitidad de centros 
    punto puntos[NUM_PUNTOS];
    centro centros[NUM_CENTROS];

    //AHora vamos a cargar la data iris y ademas iniiclizar los centros en aleatorio
    cargar_data(puntos, NUM_PUNTOS);
    iniciar_centros(centros, NUM_CENTROS);

    //COn esto vamos a registrar la cantidad de iteraciones que tuvimos y los cambios de centro que hicimos
    int cambios;
    int iteraciones = 0;

    do {
        cambios = asignar_centro(puntos, NUM_PUNTOS, centros, NUM_CENTROS);
        recalcular_centro(puntos, NUM_PUNTOS, centros, NUM_CENTROS);
        iteraciones++;
    } while (cambios > 0 && iteraciones < 100);
    printf("Centros encontrados en %d iteraciones.\n", iteraciones);

    for (int i = 0; i < NUM_CENTROS; i++) {
        printf("Centro %d: (%.2f, %.2f, %.2f, %.2f)\n", i+1, centros[i].w, centros[i].x, centros[i].y, centros[i].z);
    }

    return 0;
}

//En esta funcion realizamos el calculo de la distancia de un punto a un centro con la fomrula de la distancia euclidiana y retornamos el centro mas cercano
int distancia_cercana(punto* a, centro centros[], int num_centros, int num_componentes) {
    float min_distancia = 1000000000000;
    float distancia = 0;
    int centro_cercano = -1;
    int distancia1;

    for (int i = 0; i < num_centros; i++) {
        for (int j = 0; j < num_componentes; j++){
                distancia1 = pow(a->componentes[j] - centros[i].componentes[j], 2);
                distancia = distancia + distancia1;
        }
         if (distancia < min_distancia) {
            min_distancia = distancia;
            centro_cercano = i;
        }
    }
    return centro_cercano;
}

//En esta funcion vamos a asignar un centroa un punto tomando a donde se ha asignado en cuanto a la distancia mas cercana 
int asignar_centro(punto puntos[], int num_puntos, centro centros[], int num_centros) {
    int cambios = 0;
    for (int i = 0; i < num_puntos; i++) {
        int grupo = distancia_cercana(&puntos[i], centros, num_centros);
        if (puntos[i].grupo != grupo) {
            puntos[i].grupo = grupo;
            cambios++;
        }
    }
    return cambios;
}

//Con esta funcion vamos a recalcular la posicion del centro del grupo promeiando los valores de todos los puntos pertenecientes a ese grupo
void recalcular_centro(punto puntos[], int num_puntos, centro centros[], int num_centros, int num_componentes) {
    for (int i = 0; i < num_centros; i++) {
        for (int j = 0; j < num_componentes; j++){
            centros[i].componentes[j] = 0;
        }
        centros[i].contador = 0;
    }

    for (int i = 0; i < num_puntos; i++) {
        for (int j = 0; j < num_componentes; j++){
            centros[puntos[i].grupo].componentes[j] += puntos[i].componentes[j];
        }
        centros[puntos[i].grupo].contador++;
    }

    for (int i = 0; i < num_centros; i++) {
        if (centros[i].contador > 0) {
            for (int j = 0; j < num_componentes; j++){
                centros[i].componentes[j] /= centros[i].contador;
            }
        }
    }
}


void iniciar_centros(centro centros[], int num_centros, int num_componentes) {
    srand(time(NULL));
    for (int i = 0; i < num_centros; i++) {
        for (int j = 0; j < num_componentes; j++){
            //Falta ajustar los valores de varacion de los centros aleatorios 
            centros[i].componentes[j] = ((float)rand() / RAND_MAX) * (__FLT_MAX__ - 0.01) + 0.01;
            centros[i].contador = 0;
        }
    }
}

void cargar_data(punto puntos[], int max_puntos, int num_componetes) {
    for (int i = 0; i < max_puntos; i++) {
        for (int j = 0; j < num_componetes; j++){
            //Falta corregir error en la entrada de datos
            scanf("", &puntos[i].componentes[j]);
        }
        
        scanf("%f\t%f\t%f\t%f", &puntos[i].w, &puntos[i].x, &puntos[i].y, &puntos[i].z);
    }
}

