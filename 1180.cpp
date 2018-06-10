#include <stdio.h>

int main(){
    int x,n[10000],pos, menor;
    scanf("%d", &x);
    scanf("%d", &n[0]);
    pos = 0;
    menor = n[0];
    for(int i =1; i < x; i++){
        scanf("%d", &n[i]);
        if(n[i] < menor){
            menor = n[i]; pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}
