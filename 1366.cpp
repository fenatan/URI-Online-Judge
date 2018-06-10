#include <stdio.h>

int main(){
    int n,a,b,soma;

    while(scanf("%d", &n) && n != 0){
        soma = 0;
        for(int i=0; i < n; i++){
            scanf("%d %d", &a, &b);
            b % 2 == 0 ? soma+=b : soma+=b-1;
        }
        printf("%d\n", soma/4);

    }
    return 0;
}
