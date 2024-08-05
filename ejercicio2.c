//Convertir grados celsius a fahrenheit 
 #include<stdio.h>

int main(){
    float celsius;
    float fahrenheit;
    printf("Ingrese en celsius losgrados a convertir a fahrenheit: ");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 1.8) +32;
    printf("Los grados en fahrenheit son: %f", fahrenheit);
}