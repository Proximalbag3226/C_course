//Metodo de gauss-jordan para resolucion de sistemas de ecuaciones de 3x3 

    #include <stdio.h>
    #include <stdlib.h>

    void print_matrix(double matrix[2][3], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                printf("%.2f ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    void cargar_datos(double matrix[2][3]){
        printf("Ingrese los coeficientes de las ecuaciones:\n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; i < 3; j++){
                printf("Ingrese los coeficientes de las varialbes y su igualacion: ");
                scanf("%lf", &matrix[i][j]);
            }
        }
    }

    void imprimir_resultados(double matrix[2][3]){
        printf("\nResultados:\n");
        printf("x = %.2f\ny = %.2f\nz = %.2f\n", matrix[0][3], matrix[1][3], matrix[2][3]);
    }

    void gauss_jordan(double matrix[2][3]){
        int j = 0;
        for (int i = 0; i < 3; i++){
            do
            {
                if (matrix[i][j] == 0) break;
                else if (j == 2) {
                    printf("La matriz no tiene solucion unica.\n");
                    exit(1);
                }
                j++;
            } while (/* condition */);
            
        }
        
    }