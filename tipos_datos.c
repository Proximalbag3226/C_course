//Tipos de datos en C
#include<stdio.h>

int main(){

    //El tipo de dato char se refiere a un caracter cualquiera con un tamaño de 1 byte
    char a = 'e';

    //El tipo de dato short tiene de tamaño en memoria 2 bytes Rango de: -128 a 127
    short b = -15;

    //El elemento de tipo entero con tamaño en memoria 2 bytes Rango de:-32768 a 32767
    int c = 10;

    //Unsigned int con tamaño en memoria 2 bytes Rango de: 0 a 65535, solo pueden ser enteros positivos 
    unsigned int d = 20;

    //Long con tamaño en memoria de 4 bytes con un rango mucho (Es un numero largo y me dio hueva)
    long e = 123456;

    //El float es uno muy conocido para almacenar datos con decimales, con valor en memoria de 4 butes
    float f = 3.1416;

    //double es de los mas extensos tipos de datos que hay en C con tamaño en memoria de 8 bytes y un rango muuuuuuuuuuy extenso 
    double g = 12345.12345;

    //Las respectivas impresiones para cada tipo de dato
    printf("El elemento es %c", a);
    printf("El elemento es %i", b);
    printf("El elemento es %i", c);
    printf("El elemento es %i", d);
    printf("El elemento es %li", e);
    printf("El elemento es %f", f);
    printf("El elemento es %lf", g);
    return 0;
}