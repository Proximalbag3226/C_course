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
            printf("\nLA LINEA RECTA");
            printf("\n1. Ecuacion de la recta dada un punto y su pendiente");
            printf("\n2. Ecuacion de la recta dada dos puntos");
            printf("\n3. Distancia entre dos puntos del plano");
            printf("\n4. Punto medio entre dos puntos del plano");
            printf("\n5. Perimeto y area de un punto en el plano");
            printf("\n6. Salir");
            scanf("%i", &opcion);
            float pendiente,b;
            int x1, y1, x2, y2;
            switch (opcion){
            case 1:
            pendiente = 0;
            x1 = 0;
            y1 = 0;
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

            printf("\n Ingrese el valor de x1");
            scanf("%d",&x1);
            printf("\n Ingrese el valor de x2");
            scanf("%d",&x2);
            printf("\n Ingrese el valor de y1");
            scanf("%d",&y1);
            printf("\n Ingrese el valor de y2");
            scanf("%d",&y2);
            b=Dospuntos(x1,y1,x2,x1);
            printf("\n Las cordenadas son %i", b);
            break;

            case 3:
            x1=0;
            x2=0;
            y1=0;
            y2=0;
            b=0;
            printf("\n Ingrese el valor de x1");
            scanf("%d",&x1);
            printf("\n Ingrese el valor de x2");
            scanf("%d",&x2);
            printf("\n Ingrese el valor de y1");
            scanf("%d",&y1);
            printf("\n Ingrese el valor de y2");
            scanf("%d",&y2);
            b=Distancia(x1,y1,x2,y2);
            printf("La distancia es: ", b);
            break;

            case 4:
            x1 = 0;
            y1 = 0;
            x2 = 0;
            y2 = 0;
            printf("\nIngrese el valor de x1: ");
            scanf("%d",&x1);
            printf("\nIngrese el valor de y1: ");
            scanf("%d",&y1);
            printf("\Ingrese el valor de x2: ");
            scanf("%i", &x2);
            printf("\nIngrese el valor de y2: ");
            scanf("%i", &y2);

            struct Coordenadas corden   adas = medio(x1,x2,y1,y2);
            printf("Las coordenadas del punto medio son: (%f,%f)" cor.x3,cor.y3);
            break;
            case 5:
            printf("Perimetro y area");
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
            printf("\nLA CIRCUNFERENCIA");
            printf("\n1. Ecuación de la circunferencia con centro en el origen y radio r");
            printf("\n2. Ecuación de la circunferencia con centro C y radio r");
            printf("\n3. Ecuación de la circunferencia  con centro C y un punto P ");
            printf("\n4. Ecuación de la circunferencia con P1 y P2 como extremos  del diámetro");
            printf("\n5. Salir");
            scanf("%i", &opcion);
            switch (opcion){
            case 1:
            printf("Ecuación de la circunferencia con centro en el origen y radio r");
            break;
            case 2:
            printf("Ecuación de la circunferencia con centro C y radio r");
            break;
            case 3:
            printf("Ecuación de la circunferencia  con centro C y un punto P");
            break;
            case 4:
            printf("Ecuación de la circunferencia con P1 y P2 como extremos  del diámetro");
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
            printf("\nCoordenadas polares");
            printf("\n1. Pasar de un punto de coordenadas polares a rectangulares");
            printf("\n2. Pasar un punto de coordenadas rectangulares a polares");
            printf("\n3. Salir");
            scanf("%i", &opcion);
            switch (opcion){
            case 1:
            printf("Pasar de un punto de coordenadas polares a rectangulares");

            break;

            case 2:
            printf("Pasar de un punto de coordenadas rectangulares a polares");
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