//Ordenar de mayor a menor 5 numeros cualesquiera

#include <stdio.h>

int main(){

//Declaramos las variables 
    int a,b,c,d,e,f;

//Solicitamos los datos nesesarios
    printf("Ingrese el valor del primer numero: ");
    scanf("%i", &a);
    printf("Ingrese el valor del segundo numero: ");
    scanf("%i", &b);
    printf("Ingrese el valor del tercer numero: ");
    scanf("%i", &c);
    printf("Ingrese el valor del cuarto numero: ");
    scanf("%i", &d);
    printf("Ingrese el valor del quinto numero: ");
    scanf("%i", &e);

//Condiciones para a
    if(a<b){
        f = a;
        a = b;
        b = f;
    }
    if(a<c){
        f = a;
        a = c;
        c = f;
    }
    if(a<d){
        f = a;
        a = d;
        d = f;
    }
    if(a<e){
        f = a;
        a = e;
        e = f;
    }

//Condiciones para b
    if(b<c){
        f = b;
        b = c;
        c = f;
    }
    if(b<d){
        f = b;
        b = d;
        d = f;
    }
    if(b<e){
        f = b;
        b = e;
        e = f;
    }

//Condiciones par c
    if(c<d){
        f = c;
        c = d;
        d = f;
    }
    if(c<e){
        f = c;
        c = e;
        e = f;
    }

//Condiciones para d 
    if(d<e){
        f = d;
        d = e;
        e = f;
    }

//Imprimir los resultados 
    printf("Los numeros ordenados de mayor a menos son: %i %i %i %i %i",a,b,c,d,e);
    return 0;
}