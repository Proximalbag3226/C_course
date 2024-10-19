#include <math.h>
#include "polares.h"

//Definimos una estructura para tratar las coordenadas rectangulares

struct CoordenadasRectangulares{
    float x;
    float y;
};

//Definimos una estructura para tratar las coordenadas polares

struct CoordenadasPolares{
    float r;
    float angulo;
};


//Función para convertir coordenadas rectangulares a polares
//Esta funcion recibe como argumentos dos valores enteros de las cordenadas x e y
//Las convierte a polares en r y angulo y retornta la estructura ya definida
struct CoordenadasPolares Conversion(int x, int y){
    struct CoordenadasPolares corP;
    corP.r = sqrt(pow(x, 2) + pow(y, 2));
    corP.angulo = atan(y/x);
    return corP;
}

//Función para convertir coordenadas polares a rectangulares
//Esta funcion recibe el radio y el angulo y los convierte a coordenadas rectangulares x e y
//Retorna la estructura antes definida
struct CoordenadasRectangulares Conversion2(float r, float angulo){
    struct CoordenadasRectangulares corR;
    corR.x = r*cos(angulo);
    corR.y = r*sin(angulo);
    return corR;
}
