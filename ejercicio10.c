//Un alumno desea saber su calificacion en la materia de algortimos, dicha calificacion se compone de los siguientes porcentajes 
//55% pertecenciente al promedio de las tres calificaciones parciales, 30% por la calificacion del examen final y 15% de un trabajo final 

#include <stdio.h>

int main(){
    float parciales, examen_final,trabajo_final, calificaion_final;
    printf("Ingrese la calificacion de los examenes paciales: ");
    scanf("%f",&parciales);
    printf("Ingrese la calificacion del examen final: ");
    scanf("%f",&examen_final);
    printf("Ingrese la calificacion del trabajo final: ");
    scanf("%f",&trabajo_final);
    calificaion_final = (parciales * 0.55)+(examen_final * 0.30)+(trabajo_final * 0.15);
    printf("La calificaion final es de: %f", calificaion_final);

}