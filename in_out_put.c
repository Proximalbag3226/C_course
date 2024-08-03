//Entradas y salidas de datos 
#include<stdio.h>

int main(){

    int suma = 10;

    //En el caso de imprimir por consola se considera como un  output para salida de datos 
    printf("La suma es %i", suma);

    int a = 15;
    float b = 15.5;
    char c = 'e';

    //De esta manera podemos mostrar varias impresiones de datos 
    printf("Los tres valores de a,b,c son: %i %f %c",a,b,c);

    //Para el caso de la entrada de datos se puede realizar de la siguiente manera
    int d;
    float e;
    char f;

    //Imprimimos en la consola lo que queremos que el usuario ingrese
    printf("Digita el valor de la variable d: ");

    //Con un scan podemos recibir los datos pero debemos especificar que tipo de dato es ademas en que lugar de memoria se veran relfejados
    //En este caso el tipo de dato que estamos ingresando es un entero por lo que lo especificamos dentro de las comillas y en seguida declaramos
    //Que espacio de memoria se ocupara , en este caso el espacio en la variable d 
    scanf("%i", &d);
    printf("El valor de la variable d es: %i",d);

    //Hacemos lo mismo para las demas variables que tenemos 
    printf("Digite el valor de la variable e: ");
    scanf("%f", &e);
    printf("El valor de la variable e es: %f",e);

    //Y por ultimo para la variable f
    printf("Digite el valor de la variable f: ");
    scanf("%c", &f);
    printf("El valor de la variable f es: %c",f);

    //Por ultimo, para poder leer y almacenar cadenas de caracteres o lo que en otros lenguajes se conoce como string lo hacemos de la siguiente manera 

    //Declaramos la variable con la cantidad de caracteres que puede contener 
    char x[50];

    //Solicitamos los datos 
    printf("Por favor ingrese su nombre: ");

    //Leemos y almacenamos 
    gets(x);

    //S de string
    printf("Su nombre es: %s", x);

    return 0;
};