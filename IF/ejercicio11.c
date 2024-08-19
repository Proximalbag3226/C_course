//Dada la nota de un estudiante se asignara una calificacion y un codigo para dicha calificacion 

#include <stdio.h>

int main(){
    float calificacion1, calificacion2, calificacion3, calificcion_final;
    char nota;
    printf("Ingrese la primera calificacion: ");
    scanf("%f",&calificacion1);
    
    printf("Ingrese la segunda calificacion: ");
    scanf("%f",&calificacion2);

    printf("Ingrese la tercera calificacion: ");
    scanf("%f",&calificacion3);

    calificcion_final = (calificacion1 + calificacion2 + calificacion3)/3;

    if (calificcion_final < 5){
        nota = 'f';
    }
    else if (calificcion_final >= 5  && calificcion_final < 6){
        nota = 'd';
    }
    else if (calificcion_final>=6 && calificcion_final < 7 ){
        nota = 'c';
    }
    else if (calificcion_final>=7 && calificcion_final<10){
        nota = 'b';
    }
    else if (calificcion_final == 10){
        nota = 'a';
    }
    else{
        printf("Calificacion incorrecta");
    }
    
    switch (nota)
    {
    case 'f':
    printf("Reprobado");
    break;
    case 'd':
    printf("Reprobado");
    break;
    case 'c':
    printf("Aprobado");
    break;
    case 'b':
    printf("Notable");
    break;
    case 'a':
    printf("Excelente");
    break;

    default:
    printf("Calificacion incorrecta");
    break;
    }
    
    return 0;
}