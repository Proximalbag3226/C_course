//Encontrar el factorial de un numero 

//Incluimos las bibliotecas y creamos nuestro metodo main
#include <stdio.h>

int main(){

    //Declaramos la variable que contendra el numero a calcular y el factorial
    //La variable de factorial la vamos a inicializar en 0 ya que no puede haber factoriales negativos o iguales a 0
    int num, factorial = 1, i;

    //Pedimos al usuario que ingrese un numero y lo almacenamos en la variable num
    printf("Ingrese el numero del que desea encontrar su factorial: ");
    scanf("%d", &num);

    //Si el numero es menor a 0, mostramos un mensaje de error y salimos del programa
    if (num <0){
        printf("El numero debe ser mayor que 0\n");
        return 1;
    }

    //Calculamos el factorial del numero con un bucle for multiplicando cada numero anterior e igual al numero del que 
    //Solicitamos el factorial    
    for(i = 1; i <= num; i++){
        factorial *= i;
    }

    //Mostramos el resultado del factorial al usuario
    printf("El factorial de %d es: %d\n", num, factorial);

    return 0;
}