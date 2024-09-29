//Dada una cadena debemos imprimir todas las subcadenas de la misma 

#include <stdio.h>

int main(){

    //Declaramos las variables que vamos a utilizar
    char palabra[51];

    //los iterables y el tamaño
    int i, j, k, tamaño;
    i = 0;
    j = 0;
    k = 0;

    //Solicitamos los datos y los almacenamos dentro del array
    printf("Ingrese la palabra: ");
    scanf("%s", &palabra);
    
    //Medimos el tamaño de la cadena
    tamaño = 0;
    while (palabra[i] != '\0'){
        tamaño += 1;
        i++;
    }
    i=0;

    //Creamos nuestro primer ciclo while para poder recorrer el tamaño de la cadena para poder controlar el inicio de la subcadena 
    while (i < tamaño) {

        //Reiniciamos la variable iteradora de nuestro secungo ciclo
        j = i;

        //En el segundo ciclo while controlamos el final de la subcadena
        while (j < tamaño) {

            //Igualmente reiniciamos su variable 
            k = i;

            //Por ultimo en el tercer ciclo realizamos la impresion de la cadena 
            while (k <= j) {
                printf("%c", palabra[k]);
                k++;
            }

            //Y un salto de linea para separar las subcadenas
            printf("\n");
            j++;
        }
        i++;
    }

    return 0;
}