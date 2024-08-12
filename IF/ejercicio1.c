//Crear un programa que compruebe la calificacion de un alumno para detectawr si aprobo o no
//Para esto se van a considerar 3 calificaciones parciales que se deben promediar y si dicho pronedio es mayor a 5 se considera aprobatoria 

#include <stdio.h>


int main(){
    float parcial_1, parcial_2, parcial_3, calificacion_final;
    printf("Ingrese la calificacion del primer parcial: ");
    scanf("%f", &parcial_1);
    printf("Ingrese la calificacion del segundo parcial: ");
    scanf("%f", &parcial_2);
    printf("Ingrese la calificacion del tercer parcial: ");
    scanf("%f", &parcial_3);
    calificacion_final = (parcial_1 + parcial_2 + parcial_3)/3;
    if (calificacion_final>5.0){
        printf("El alumno tiene una calificacion aprobatoria de %f", calificacion_final);
    };

    return 0;
}

