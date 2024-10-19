#include <math.h>
#include "circunferencia.h"

float Radio(int radio){
    float r;
    r = pow(radio, 2);
    return r;
}

float Centro(int radio){
    float r;
    r = pow(radio, 2);
    return r;
}

float Punto(int x1, int y1, int x2, int y2){
    float distancia;
    float r;
    distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    r = pow(distancia, 2);
    return r;
}

float Diametro(int x1, int y1, int x2, int y2){
    float distancia;
    float r;
    distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    r = pow(distancia, 2)/2;
    return r;
}
