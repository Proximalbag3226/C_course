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



