//Dada una cadena de hasta 1000 caracteres incluyendo, mayusculas, minusculas y espacios, devuelva la cantidad de 
//Vocales que contiene

int main(){
    int i,j, tamaño, vocales;
    i = 0;
    j = 0;
    tamaño = 0;
    vocales = 0;

    char mensaje[1000];
    printf("Ingrese la cadena de caracteres a evaluar: ");

    while (i != '\n'){
        tamaño++;
        i++;
    }
    
    while (j<tamaño){
        if(j == "a" || j=="e" || j=="i" || j=="o"  || j=="u" || j=="A" || j=="E" || j=="I" || j=="O" || j=="U"){
            vocales++;
        }
        j++;
    }
    printf("La cantidad de vocales en la cadena es: %d\n", vocales);

    return 0;
}