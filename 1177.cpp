#include <stdio.h>

int main(){
    int t, cont;
    scanf("%d", &t);
    cont = 0;
    for(int i =0; i < 1000; i++){
        printf("N[%d] = %d\n", i,cont);
        cont++;
        if(cont == t)
            cont = 0;
    }
    return 0;
}
