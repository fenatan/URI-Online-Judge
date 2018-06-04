#include <stdio.h>

int main(){
   int v[7] = {100, 50, 20, 10, 5, 2, 1};
   int auxVet[7];
   int n, i, aux;

   scanf("%d", &n);
   aux = n;
   for(i=0; i < 7; i++){
     auxVet[i]= n/v[i];
     n = n - (auxVet[i] * v[i]);
   }
   printf("%d\n", aux);
   printf("%d nota(s) de R$ 100,00\n", auxVet[0]);
   printf("%d nota(s) de R$ 50,00\n", auxVet[1]);
   printf("%d nota(s) de R$ 20,00\n", auxVet[2]);
   printf("%d nota(s) de R$ 10,00\n", auxVet[3]);
   printf("%d nota(s) de R$ 5,00\n", auxVet[4]);
   printf("%d nota(s) de R$ 2,00\n", auxVet[5]);
   printf("%d nota(s) de R$ 1,00\n", auxVet[6]);

   return 0;
}
