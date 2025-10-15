#include <stdio.h>
#include <math.h>

int perfecto(int n);
int mostrar(int n);
int perfecto_formula(int p);

int main(){
    int numero, resultado;
    
    printf("Ingrese un numero para su evaluacion: ");
    scanf("%i", &numero);
    /*
    resultado = perfecto(numero);
    if (resultado == 1){
        printf("Es un numero perfecto");
    }
    else{
        printf("No es un numero perfecto");
    }
        */
       /*
    mostrar(numero);
    return 0;
    */
    perfectos_formula(numero);
}

int perfecto(int n){
    int suma;
    suma = 0;
    for (int i = 1; i < n; i++){
        if ((n % i) == 0){
            suma += i;
        }
    }
    if (n == suma){
        return 1;
    }
    return 0;
    
}

int mostrar(int n){
    int z, bandera;
    for (int j = 0; bandera<n; j++){
        z = perfecto(j);
        if (z == 1){
            printf("El %i es un numero perfecto.\n", j);
            bandera++;
    }
    }
}

int perfectos_formula(int p){
    int perfecto = pow(2, p-1)*(pow(2, p)-1);
    printf("%i", perfecto);
}