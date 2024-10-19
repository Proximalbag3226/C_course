#include <math.h>
#include "polares.h"

int Conversion(int x, int y){
    float r, angulo;
    r = sqrt(pow(x, 2) + pow(y, 2));
    angulo = atan(y/x);
}

int Conversion2(int r, float angulo){
    float x,y;
    x = r*cos(angulo);
    y = r*sin(angulo);
}
