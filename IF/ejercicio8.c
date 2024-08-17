//Ingresar los datos de una persona, nombre, edad, sexo e imprima dichos datos solo si la persona es de sexo masculino y mayor de edad 

#include <stdio.h>

int main(){
    char nombre[30], sexo[15];
    int edad;
    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Ingrese su sexo: ");
    gets(sexo);
    printf("Ingrese su edad:");
    scanf("%i",&edad);

    if (strcmp(sexo, "masculino")==0){
        if(edad>18){
            printf("Sus datos son: nombre: %s y su edad es de: %i", nombre, edad);
        }
        else("No cumple con los requisitos de edad");
    }
    else{
        printf("No cumple con los requisitos de sexo");
    }

    return 0;
}