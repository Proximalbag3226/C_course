//Dado un array de letras de hasta 50 caracteres devolver si es una palabra palindromo o no

#include <stdio.h>

int main(){
    //Definimos el array de caracteres que vamos a utilizar, ademas de los iteradores para los ciclos 
    char palabra[51];
    int i, j, tamaño, tam2, palindromo;
    i = 0;
    j = 0;
    tamaño = 0;
    palindromo = 1;
    //Solicitamos la palabra a evaluar y la guardamos dentro de nuestra variable 
    printf("Ingrese la palabra a anlizar: ");
    scanf("%s", &palabra);

    //Vamos a analizar el tamaño de la cadena 
    while (palabra[i] != '\0'){
        tamaño += 1;
        i++;
    }

    //Al ser un palindromo solo nesesitaremos analizar hasta la mitad de la cadena para saber si la cadena completa lo es o no
    tam2 = tamaño/2;
    
    //Relizamos dicha evaluacion con un ciclo para poder comparar caracater con caracter
    while (j<tam2){
        if(palabra[j] != palabra[tamaño-j-1]){
            palindromo = 0;
            break;
        }
        j++;
    }

    //Con una condicion imprimimos los resultados 
    if(palindromo == 1){
        printf("Es un palindromo");
    }
    else{
        printf("No lo es");
    }


    return 0;
}