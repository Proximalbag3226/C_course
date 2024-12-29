//Los punteros o apuntaodres son un tipo de dato por asi decirlo ya que es una variable como todas las demas que conocemos como int, float, char, double etc
//Pero en el caso de los puntores son una variable que almacena direcciones de memoria, la cuiosidad que podemos encontrar es que tenemos diferentes tipos de punteros
//Esto depende del tipo de dato que queremos alamacenar en esa direccion de memoria, recordemos que los diferntes tipos de datos ocupan diferente cantidad de bites en memoria
//Por dentro de su declaracion debemos especificar el tipo de puntero que deseamos crear, por ejemplo:

int *a;

//En esta linea de codigo definimos un puntero llamado a de tipo entero por tanto este debera alamacenar la direccion de memoria de un tipo de dato entero 
//Esto se repite analogamente para los diversos tipos de datos, ejemplo:

float *a1;
char *a2;
double *a3;
short *a4;

//Declaramos 4 punteros que almacenan diferentes tipos de direccinoes de memoria

//Manejemos apuntadores.
//Estos pueedn ser utilizados con dos tipos de operadores los cuales son "*"" y "&" el primero de ellos realiza la funcion de desreferenciacion que consiste en la obtencion
//Del valor de la direccion de memoria que contiene nuestro apuntador, notese que "*" es un operador unario como podria ser igual el not, ejemplo:

int i = 0;
int *p;

p = &i;

//En este ejemplo estamos declarando un puntero llamado p y una variable llamada i, ambos de tipo entero, para depues asignar a nuestro puntero el valor de memoria donde 
//Se almacena la variable i

//Ahora un ejemplo de desreferenciacion:

//Declaramos nuestras variables a utilizar
int x = 17, y;

//Indicamos nuestro apuntador y le decimos que tome el valor de x
int *p = &x;

//Por ultimo realizamos una operacion con el, donde y seria igual a 20
y = 3 + *p;

//Tambien podemos realizar esto con estructuras de datos asignadas a apuntadores, ejemplo:

typedef struct { 
    char nombre[20];
    int edad;
} persona;

persona *p;

//Podemos acceder a los valores dentro de la estructura de dos formas diferentes
p.edad;
p->edad;

//De esta manera podemos acceder a los valores dentro de una estructura con una variable de tipo apuntador 


//Ahora veremos los apuntadores a apuntadores 
//Esto no es mas que un puntero que apunta a otro que a su vez apunta a un dato 
//Su sintaxis se puede declarar de sla siguiente forma 
int **z;

//Usando doble asterisco podemos definir un doble apuntador y ¿para que podeoms utilizar los dobles apuntadores?
//Primeramente se llegan a utilizar para el manejo y manipulacion de matrices dinamicas multimensionales 
//Estasz matrices se caracterisan porque no tienen un tamaño estatico en el tiempo de compilacion si no mas bien este tamaño
//Se define en tiempo de ejecucion, se utilizan punteros ya que no podemos definir el tamaño de momoria que vamos a utilizar 
//Antes del tiempo de ejecucion, ya entrando en materia, los dobles punteros los podemos utilizar como una lista de listas
//Es decir, nuestro pntero doble apunta a un arreglo de punteros, de esta manera cada puntero del arreglo apunta a una fila de la 
//Matriz y esta fila a su vez es un arreglo dinamico de datos

//La otra implementacion que podemos realizar de los dobles punteros es la de modificar el valor de un puntero dentro de una funcion 
//Aqui un ejemplo de modificacion del valor de un puntero dentro de una funcion

void modificarValor(int **p) {
    **p = 10;
}

int main() {
    int x = 5;
    int *p = &x;
    modificarValor(&p);
    printf("El nuevo valor de x es: %d\n", x);
    return 0;
}

//Como puedes ver, cuando modificamos el valor de un puntero dentro de una funcion, este cambio se vera reflejado en la variable original

//Tambien podemos tener aputnadores constantes y apuntadores a constantes, el primero de ellos nos permite la modificacion del valor del apuntador 
//Mas sin embargo no nos permite la modificacion de la direccion a la que apunta 

//Ejemplo de declaracion de un apuntador constante 
int main() {
    int x = 5;

    //Utilizamos la palabra reservada const para declara nuestro apuntador que va a almacenar el valor de x 
    int *const p = &x;

    //Aqui vamos a modificar el valor de x 
    *p = 10;
    printf("El nuevo valor de x es: %d\n", x);
    return 0;
}

//En este ejemplo se puede ovbsercar que no hay ningun problema al cambiar los valores de la variable a la que apunta mas sin embargo 
//Si intentamos modificar a donde apunta obtendriamos un error, es decir no podremos apuntar a una variable y que hayamos declarado

//Ahora un ejemplo de apuntadores a constantes 

int main() {

    //Declaramos nuestras variables pero si obvervamos con detenimiento podemos darnos cuenta que a diferencia del codigo anterior 
    //La palabra reservada const esta antes de la declaracion del tipo de variable lo que nos inidica que sera un valor constante 
    //Por tanto la direccion de memoria puede ser modificada mas sin embargo el valor del apuntador no
    int x = 5;
    const int *p = &x;

    //Aqui vamos a modificar el valor de x 
    x = 10;
    printf("El nuevo valor de x es: %d\n", x);
    return 0;
}

//Ahora pasemos con los arreglos y la aritmetica de apuntadores


