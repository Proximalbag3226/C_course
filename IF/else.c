//La sentencia else es el complemento de la sentencia if, ya que supongamos que tenemos 2 lados de un mismo caso, si se cumple la condicion o no
//Para estos casos utiliazmos el else que nos permite agregar una condicion en caso de que la primera no se cumpliese
//Cabe aclarar que esta segunda condicion es general, es decir si tenemos un caso con mas de 2 lados, tendremos que if solo cubrira uno y else todos los demas 
//Para hacer respuestas personalizadas para cada caso tendriamos que recurrir a un switch o un elif 

#include <stdio.h>

//Para explicar esto usaremos una implementacion secilla de un alumnno aprobado o desaporbado 
int main(){

    //Definimos la variable que vamos a utilizar para recibir la calificacion
    float calificacion;

    //Pedimos, recibimos y almacenamos los datos 
    printf("Escriba su calificacion: ");
    scanf("%f", &calificacion);

    //Ahora utilizamos una sentencia if como primera condicion que nos establece para este caso que si la calificacion es mayor a 5 aprueba 
    if(calificacion > 5.0){
        printf("Usted tiene una calificacion aprobatoria");
    }

    //Para la sentencia else no se nesesita especificar una condicion ya qae el codigo contenido dentro de else se va a ejecutar para cualquier
    //Caso diferente a donde la calificacion no sea mayor a 5 
    else{
        printf("Usted no cuenta con una calificacion aprobatoria");
    }

    return 0;
}