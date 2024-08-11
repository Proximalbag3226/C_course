//Calcular la cantidad de segundos en que estan incluidos en las horas, minutos y segundos que ingresa el usuario

#include <stdio.h>

#define Horas_segundos 3600
#define Minutos_segundos 60

int main(){
    int horas, minutos, segundos, segundos_f;
    printf("Ingresa las horas: ");
    scanf("%i",&horas);
    printf("ingresa los minutos: ");
    scanf("%i",&minutos);
    printf("Ingrese los segundos: ");
    scanf("%i",&segundos);
    segundos_f = (horas * Horas_segundos)+(minutos * Minutos_segundos)+segundos;
    printf("Los segundos totales son: %i", segundos_f);
}