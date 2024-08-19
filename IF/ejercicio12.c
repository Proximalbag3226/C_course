//Seleccionar un tipo de vehiculo e indicar el peaje a pagar

#include <stdio.h>

int main(){
    int vehiculo;
    printf("Tipos de vehiculos, seleccione uno de ellos: ");
    printf("\n1.-Turismo");
    printf("\n2.-Autobus");
    printf("\n3.-Motocicleta");
    scanf("%i", &vehiculo);
    switch (vehiculo)
    {
    case 1:
    printf("El peaje a pagar es de 500$");
    break;
    case 2:
    printf("El peaje a pagar es de 3000$");
    break;
    case 3:
    printf("El peaje a pagar es de 300$");
    break;
    default:
    printf("Vehiculo no autorizado");
    break;
    }

    return 0;
}