#include <stdio.h>


int main(){
    int n, cont;
    scanf("%d", &n);
    cont = 1;

    while(cont <= n){
        if(n % cont == 0)
            printf("%d\n", cont);
        cont++;
    }
    return 0;
}
