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

//Con esta funcion recibimos 4 valores enteros de las coordenadas de dos puntos en el plano 
//Tomamos esos puntos y aplicamos la formula de la distancia entre puntos en ellos
//Retornamos ese valor que llamaremos distancia que es un tipo flotante 
float Distancia(int x1, int y1, int x2, int y2){
    float distancia;
    distancia = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
    return distancia;
}

//Definimos una estructura con dos valores flotantes para guardar las coordenadas que vamos a retornar 
struct Coordenadas {
   float x3;
   float y3;
};

//Con esta función recibimos 4 valores enteros de las coordenadas de dos puntos en el plano
//Vamos a encontrar el punto medio entre estos puntos y retonramos una estructura que contiene 
//Ambos valores 
struct Coordenadas medio(int x1, int y1, int x2, int y2){
    struct Coordenadas cor;
    cor.x3 = (x1+x2)/2.0;
    cor.y3 = (y1+y2)/2.0;
    return cor;
}


//Recibimos las coordenadas de los 3 vertices del triangulo y calculamos el area de este
//Retornamos el area como un valor flotante con su valor absoluto 
float Area(int x1, int y1, int x2, int y2, int x3, int y3){
    float area;
    area = 0.5*fabs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
    return area;
}

//Para calcular el perimetro de igual manera vamos a solicitar los 3 vertices 
//Y sumar la distancia entre ellos con la funcion de distancia entre puntos que ya habiamos
//Definido mas arriba
float Perimetro(int x1, int y1, int x2, int y2, int x3, int y3){
    float p;
    p = Distancia(x1,y1,x2,y2) + Distancia(x1,y1,x3,y3) + Distancia(x2,y2,x3,y3);
    return p;
} 

