//Hacer un programa que borre la pantalla en caso de que el usuario pulse 1 

#include <stdio.h>
#include <stdlib.h>


int main(){
    char tecla;
    printf("Palabras de ejemplo que vamos a utilizar para probar el borrado de pantalla");
    printf("\naaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    printf("\naaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    printf("\nDigite el numero 1 ");
    scanf("%c",&tecla);
    if (tecla == '1'){
        system("cls");
        printf("Pantalla limpiada adecuadamente");
    }
    else{

        //Esta funcion limpia el bufer 
        fflush(stdin);
        printf("Tecla erronea para el limpiado de pantalla");
        printf("Por favor digite el numero 1: ")
        scanf("%c",&tecla);
        if(tecla == '1'){
            system("cls")
        }
        else{
            printf("No funciono")
        }
    }

    return 0;
}