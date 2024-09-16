//Se quiere encontrar un codigo secreto dado de una serie de numeros dados, en una serie de numeros dados se 
//Tiene que encontar el numero de codigo secreto en esa serie de numeros y en caso de que se encuentre se imprime True
//En caso contrario se imprime False 

#include <stdio.h>

int main(){
    int i, m, n, o;
    i = 0;
    printf("Ingrese la cantidad de numeros que contiene el codigo: ");
    scanf("%i", &m);
    printf("Ingrese el numero a buscar: ");
    scanf("%i", &o);
    while (i<m){
        printf("Ingrese el numero del codigo: ");
        scanf("%i", &n);
        if(o == n){
            printf("True");
            break;
        }
        else{
            continue;
        }
        i++;
    }
    printf("False");

    return 0; 
}