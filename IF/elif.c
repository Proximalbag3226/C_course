//Dentro de los manejos de casos especificos contamos con el elif que nos permite crear respuestas para casos especificos que puedan suceder durante la ejecucion 
//Elif al igual que switch nos permite especificar casos y su respectivo codigo dependiendo de la situacion, esto nos es miuy util cuando tenemos muchos y diferentes 
//Resultados a esperar

#include <stdio.h>

//Tomaremos un ejemplo muy simple para mostrar el uso de elif 
int main(){

    //Declaramos ambas variables de tipo entero para el ejemplo
    int a,b;

    //Pedimos, leemos y almacenamos cada numero
    printf("Introduzca el primero numero: ");
    scanf("%i",&a);
    printf("Introduzca el segundo numero: ");
    scanf("%i",&b);

    //Usamos if para establecer la primera condicion 
    if (a < b){
        printf("%i es menor que %i",a,b);
    }

    //Elif para el segundo caso
    else if (a > b){
        printf("%i es menor que %i",b,a);
    }

    //En caso de que ninguna de las dos condiciones se cumpla el else cumplira su funcion
    else{
        printf("Los dos numeros son iguales");
    }
    
}