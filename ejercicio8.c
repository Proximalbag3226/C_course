//Dadas las horas de trabajo de un empleado y el valor por hora, calcular el salario minimo 

#include <stdio.h>

int main(){
    float horas_trabajo, valor_hora, salario_minimo;
    printf("Ingrese las horas de trabajo del empleado: ");
    scanf("%f",&horas_trabajo);
    printf("Ingrese el valor de las horas de trabajo del empleado: ");
    scanf("%f",&valor_hora);
    salario_minimo = valor_hora * horas_trabajo;
    printf("El salario minimo del empleado es de: %f", salario_minimo);
}
