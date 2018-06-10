#include <stdio.h>

int main(){
    int x,y,flag;
    flag = 1;
    do{
        scanf("%d %d", &x,&y);
        if(x == y)
            flag = 0;
        else
            (x > y) ? printf("Decrescente\n") : printf("Crescente\n");
    }while(flag == 1);
    return 0;
}
