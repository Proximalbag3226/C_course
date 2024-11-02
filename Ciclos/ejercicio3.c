//Suma de tipo n-n+1+n+2-n+3...n+n
//En otras palabras la suma de los enteros impares postivos y los pares negativos 

#include <stdio.h>

int main() {
    int n, i, suma, suma_pares,  suma_impares, ne;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    suma = suma_impares = suma_pares = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0){
            ne = i * (-1);
            suma_pares  += ne;
        }
        else{
            suma_impares = suma + i;
        }
    }

    suma = suma_pares + suma_impares;

    printf("\nLa suma es: %d", suma);
    
    return 0;
}