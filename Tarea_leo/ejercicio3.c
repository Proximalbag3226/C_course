#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   printf("Introduce la cantiadd de numero a digitar: ");
   scanf("%d", &n);
   int *array;
   array = (int *)malloc(n * sizeof(int));
   for (int i = 0; i < n; i++) {
      printf("Introduce un numero: ");
      scanf("%d", &array[i]);
   }
   for (int i = 0; i < n; i++) {
      printf("%d ", *(array + i));
   }

   return 0;
}