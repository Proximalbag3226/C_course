#include <stdio.h>

void hola();

int main(){
    int filas;
    printf("Ingrese la cantidad de filas que desea: ");
    scanf("%i", &filas);
    if (filas <= 0){
        printf("No se puede realizar con un numero negativo o igual a 0");
        return 0;
    }
    else{
        for (int i = 0; i <= filas; i++){
            for (int j = 0; j < i; j++){
                if (j % 2 != 0){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}
