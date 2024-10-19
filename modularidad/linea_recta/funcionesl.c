#include <math.h>
#include "linea.h"

//Esta funcion recibe como parametros 3 valores, 2 de ellos enteros y el tercero es un valor flotante
//Y nos retorna el valor de la ordenada al origen 
float Puntopendiente(float pendiente, int x1, int y1){
    float b;
    b = y1 - (pendiente*x1);
    return b;
}

//Esta funcion recibe 4 valores enteros cada uno coordenada de un punto en el plano 
//De igual manera retorna el valor de la ordenada al origen
float Dospuntos(int x1, int y1, int x2, int y2){
    if (x2 == x1){
        return NAN;
    }
    
    float m, b;
    m = (float)(y2 - y1)/(x2 - x1);
    b = y1 - (m*x1);
    return b;
}

float Distancia(int x1, int y1, int x2, int y2){
    float distancia;
    distancia = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
    return distancia;
}

struct Coordenadas {
   float x3;
   float y3;
};

struct Coordenadas medio(int x1, int y1, int x2, int y2){
    struct Coordenadas cor;
    cor.x3 = (x1+x2)/2;
    cor.y3 = (y1+y2)/2;
    return cor;
}

