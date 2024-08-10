//Calcular el nuevo salario de un empleado si este mismo recibio un aumento del 25% sobre su salario 

#include <stdio.h>
#define Aumento 0.25

int main(){
    float salario, salario_final;
    printf("Ingrese el anterior salario del emepleado: ");
    scanf("%f",&salario);
    salario_final = salario + (salario*Aumento);
    printf("El salario final del empleado es de: %f", salario_final);
}