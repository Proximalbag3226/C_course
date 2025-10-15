#include <stdio.h>
#include <string.h>
void remover_adyacentes_iguales(char *s) {
    if (s == NULL || *s == '\0') {
        return;
    }
    int indice_lectura = 0;
    int indice_escritura = 0;
    while (s[indice_lectura] != '\0') {
        char caracter_actual = s[indice_lectura];

        if (indice_escritura == 0 || caracter_actual != s[indice_escritura - 1]) {
            s[indice_escritura] = caracter_actual;
            indice_escritura++;
        }
        else {
            indice_escritura--;
        }
        indice_lectura++;
    }
    s[indice_escritura] = '\0';
}
int main() {
    char cadena1[] = "ABCCBCBA";
    printf("Original: %s\n", cadena1);
    remover_adyacentes_iguales(cadena1);
    printf("Resultado: %s\n", cadena1); // Esperado: ACBA

    printf("---\n");

    char cadena2[] = "azxxzy";
    printf("Original: %s\n", cadena2);
    remover_adyacentes_iguales(cadena2);
    printf("Resultado: %s\n", cadena2); // Esperado: ay

    printf("---\n");

    char cadena3[] = "aabbaa";
    printf("Original: %s\n", cadena3);
    remover_adyacentes_iguales(cadena3);
    printf("Resultado: %s\n", cadena3); // Esperado: (cadena vacía)

    return 0;
}