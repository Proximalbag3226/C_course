//Ingresar por teclado el nombre y el signo de una persona e imprima su nombre en caso de que la persona sea de signo aries 
//En caso de que sea alguno otro, imprima que no es de signo aries 

#include <stdio.h>

int main(){
    char nombre[30], signo[20];
    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Ingrese su signo zodiacal: ");
    gets(signo);

    //Aqui vamos a utlizar la funcion strcmp para poder comparar cadenas 
    if(strcmp(signo, "aries")==0){
        printf("Su nombre es: %s", nombre);
    }
    else{
        printf("Usted no es signo aries");
    }

    return 0;
}