#include <stdio.h>

int main(){
    int n[20],aux;
    for(int i =0; i < 20; i++)
        scanf("%d", &n[i]);

    int cont = 19;

    for(int i =0; i < 10; i++){
        aux = n[i];
        n[i] = n[cont];
        n[cont] = aux;
        cont--;
    }

    for(int i =0; i < 20; i++)
        printf("N[%d] = %d\n",i, n[i]);

    return 0;
}
