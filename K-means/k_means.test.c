#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "k_means.h"

#define EPSILON 0.0001

int main() {
    return 0;
}void test_asignar_centro_equidistant_points() {
    punto puntos[] = {
        {1.0, 1.0, 1.0, 1.0, 0},
        {1.0, 1.0, 1.0, 1.0, 0},
        {1.0, 1.0, 1.0, 1.0, 0}
    };
    centro centros[] = {
        {0.0, 0.0, 0.0, 0.0, 0},
        {2.0, 2.0, 2.0, 2.0, 0},
        {-2.0, -2.0, -2.0, -2.0, 0}
    };
    int num_puntos = 3;

    int cambios = asignar_centro(puntos, num_puntos, centros);

    assert(cambios == 3);
    assert(puntos[0].grupo >= 0 && puntos[0].grupo < 3);
    assert(puntos[1].grupo >= 0 && puntos[1].grupo < 3);
    assert(puntos[2].grupo >= 0 && puntos[2].grupo < 3);
    printf("test_asignar_centro_equidistant_points passed\n");
}