#include <stdio.h>
int cont;

int fib(int n){
    cont++;
    if(n == 0)
        return 0;
    else
        if(n == 1)
            return 1;
        else
            return fib(n-1) + fib(n-2);
}

int main(){
    int n,x;
    scanf("%d", &x);
    for(int i =0; i < x; i++){
        cont = 0;
        scanf("%d", &n);
        int f = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, cont-1, f);
    }
    return 0;
}
