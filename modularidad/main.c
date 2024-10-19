#include <stdio.h>
#include "polares/polares.h"
#include "linea_recta/linea.h"
#include "circunferencia/circunferencia.h"

int main(){


    int bucle, opcion, bucle2;
    bucle = 1;
    opcion = 0;
    bucle2 = 1;


    while (bucle2 == 1){
        printf("\n----Bienvenido a la calculadora de geometria analitica----");
        printf("\n1. Linea recta");
        printf("\n2. La circunferencia");
        printf("\n3. Coordenadas polares");
        printf("\n4. Salir");
        printf("\nIngrese su opcion: \n");
        scanf("%i", &opcion);

        if(opcion == 1){
            bucle = 1;
            while (bucle == 1){
                opcion = 0;
                printf("\n-----LA LINEA RECTA-----");
                printf("\n1. Ecuacion de la recta dada un punto y su pendiente");
                printf("\n2. Ecuacion de la recta dada dos puntos");
                printf("\n3. Distancia entre dos puntos del plano");
                printf("\n4. Punto medio entre dos puntos del plano");
                printf("\n5. Perimeto y area de un triangulo en el plano");
                printf("\n6. Salir");
                scanf("%i", &opcion);


                float pendiente,b, area, perimetro;
                int x1, y1, x2, y2, x3, y3;


                switch (opcion){
                    
                    case 1:
                        pendiente = 0;
                        x1 = 0;
                        y1 = 0;
                        printf("\n---Ecuacion de la recta dada su pendiente---");
                        printf("Ingrese el valor de la pendiente: ");
                        scanf("%f",&pendiente);
                        printf("\nIngrese el valor de x: ");
                        scanf("%i", &x1);
                        printf("\nIngrese el valor de y: ");
                        scanf("%i", &y1);
                        b = Puntopendiente(pendiente,x1,y1);
                        printf("La ecuacion es: y = %fx + %f",pendiente,b);
                    break;


                    case 2:
                        x1=0;
                        x2=0;
                        y1=0;
                        y2=0;
                        b=0;
                        printf("\n---Ecuacion de la recta dadas dos puntos---");
                        printf("\n Ingrese el valor de x1");
                        scanf("%d",&x1);
                        printf("\n Ingrese el valor de x2");
                        scanf("%d",&x2);
                        printf("\n Ingrese el valor de y1");
                        scanf("%d",&y1);
                        printf("\n Ingrese el valor de y2");
                        scanf("%d",&y2);
                        b=Dospuntos(x1,y1,x2,y2);
                        printf("\n Las cordenadas son %i", b);
                    break;


                    case 3:
                        x1=0;
                        x2=0;
                        y1=0;
                        y2=0;
                        b=0;
                        printf("\n---Distancia entre dos puntos del plano---");
                        printf("\n Ingrese el valor de x1");
                        scanf("%d",&x1);
                        printf("\n Ingrese el valor de x2");
                        scanf("%d",&x2);
                        printf("\n Ingrese el valor de y1");
                        scanf("%d",&y1);
                        printf("\n Ingrese el valor de y2");
                        scanf("%d",&y2);
                        b=Distancia(x1,y1,x2,y2);
                        printf("La distancia es: %f", b);
                    break;


                    case 4:
                        x1 = 0;
                        y1 = 0;
                        x2 = 0;
                        y2 = 0;
                        printf("\n---Punto medio entre dos puntos del plano---");
                        printf("\nIngrese el valor de x1: ");
                        scanf("%d",&x1);
                        printf("\nIngrese el valor de y1: ");
                        scanf("%d",&y1);
                        printf("\nIngrese el valor de x2: ");
                        scanf("%i", &x2);
                        printf("\nIngrese el valor de y2: ");
                        scanf("%i", &y2);
                        struct Coordenadas cordenadas = medio(x1,y1,x2,y2);
                        printf("\nLas coordenadas del punto medio son: (%f, %f)", cordenadas.x3,cordenadas.y3);
                    break;


                    case 5:
                        x1 = x2 = y1 = y2 = x3 = y3 = 0;
                        area = perimetro = 0.0;
                        printf("---Perimetro y area de un triangulo---");
                        printf("\nIngrese el valor de x1:");
                        scanf("%d",&x1);
                        printf("\nIngrese el valor de y1:");
                        scanf("%d",&y1);
                        printf("\nIngrese el valor de x2:");
                        scanf("%d",&x2);
                        printf("\nIngrese el valor de y2:");
                        scanf("%d",&y2);
                        printf("\nIngrese el valor de x3:");
                        scanf("%d",&x3);
                        printf("\nIngrese el valor de y3:");
                        scanf("%d",&y3);

                        area = Area(x1,y1,x2,y2,x3,y3);
                        perimetro = Perimetro(x1,y1,x2,y2,x3,y3);

                        printf("\nEl area del triangulo es: %f y su perimrtro es %f", area, perimetro);
                    break;

                    
                    case 6:
                        bucle=0;
                    break;


                    default:
                        printf("Por favor ingrese una opcion correcta");
                    break;
                }
            }
        }


        else if (opcion == 2){
            bucle = 1;
            while (bucle == 1){
                opcion = 0;
                printf("\n-----LA CIRCUNFERENCIA-----");
                printf("\n1. Ecuación de la circunferencia con centro en el origen y radio r");
                printf("\n2. Ecuación de la circunferencia con centro C y radio r");
                printf("\n3. Ecuación de la circunferencia  con centro C y un punto P ");
                printf("\n4. Ecuación de la circunferencia con P1 y P2 como extremos  del diámetro");
                printf("\n5. Salir");
                scanf("%i", &opcion);


                int radio, x1, y1, x2, y2;
                float r;


                switch (opcion){


                case 1:
                    radio = 0;
                    r = 0.0;
                    printf("---Ecuación de la circunferencia con centro en el origen y radio r---");
                    printf("Ingrese el valor del radio: ");
                    scanf("%i",&radio);

                    r = Radio(radio);

                    printf("La ecuación es: x^2 + y^2 = %f", r);
                break;


                case 2:
                    x1 = y1 = 0;
                    x2 = y2 = 0;
                    r = 0.0;
                    radio = 0;
                    printf("---Ecuación de la circunferencia con centro C y radio r---");
                    printf("Ingrese el valor de x: ");
                    scanf("%i",&x1);
                    printf("Ingrese el valor de y: ");
                    scanf("%i",&y1);
                    printf("Ingrese el valor del radio: ");
                    scanf("%i",&radio);

                    r = Centro(radio);

                    printf("La ecuación es: (x - %d)^2 + (y - %d)^2 = %f^2", x1, y1, r);
                break;


                case 3:
                    x1 = y1 = 0;
                    x2 = y2 = 0;
                    r = 0.0;
                    printf("---Ecuación de la circunferencia con centro C y un punto P ---");
                    printf("Ingrese el valor de x1: ");
                    scanf("%i",&x1);
                    printf("Ingrese el valor de y1: ");
                    scanf("%i",&y1);
                    printf("Ingrese el valor de x2: ");
                    scanf("%i",&x2);
                    printf("Ingrese el valor de y2: ");
                    scanf("%i",&y2);

                    r = Punto(x1, y1, x2, y2);
                    printf("La ecuación es: (x - %d)^2 + (y - %d)^2 = %f^2", x1, y1, r);
                break;


                case 4:
                    x1 = y1 = 0;
                    x2 = y2 = 0;
                    printf("---Ecuación de la circunferencia con P1 y P2 como extremos  del diámetro---");
                    printf("Ingrese el valor de x1: ");
                    scanf("%i",&x1);
                    printf("Ingrese el valor de y1: ");
                    scanf("%i",&y1);
                    printf("Ingrese el valor de x2: ");
                    scanf("%i",&x2);
                    printf("Ingrese el valor de y2: ");
                    scanf("%i",&y2);

                    r = Diametro(x1, y1, x2, y2);
                    printf("La ecuación es: (x - %d)^2 + (y - %d)^2 = %f^2", x1, y1, r);
                break;


                case 5:
                    bucle=0;
                break;


                default:
                    printf("Por favor ingrese una opcion correcta");
                break;
                }
            }
        }


        else if (opcion == 3){
            bucle = 1;
            while (bucle == 1){
                opcion = 0;
                printf("\n-----COORDENADAS POLARES-----");
                printf("\n1. Pasar de un punto de coordenadas polares a rectangulares");
                printf("\n2. Pasar un punto de coordenadas rectangulares a polares");
                printf("\n3. Salir");
                scanf("%i", &opcion);
                float theta,x,y,r;


                switch (opcion){


                case 1:
                    printf("---Coversion de coordenadas polares a rectangulares---");
                    printf("Ingrese el valor de r: ");
                    scanf("%f",&r);
                    printf("Ingrese el valor de theta en radianes: ");
                    scanf("%f",&theta);

                    struct CoordenadasRectangulares coordenadasR = Conversion2(r, theta);
                    printf("Las coordenadas el rectngulares son: x = %f e y = %f", coordenadasR.x, coordenadasR.y);

                break;

                case 2:
                    printf("---Conversion de coordenadas rectangulares a polares---");
                    printf("Ingrese el valor de x: ");
                    scanf("%f",&x);
                    printf("Ingrese el valor de y: ");
                    scanf("%f",&y);

                    struct CoordenadasPolares coordenadasP = Conversion(x, y);
                    printf("Las coordenadas en polares son: r = %f y theta = %f", coordenadasP.r, coordenadasP.angulo);
                break;


                case 3:
                    bucle=0;
                break;


                default:
                    printf("Por favor ingrese una opcion correcta");
                break;
                }
            }        
        }
    }
    
    return 0;
}