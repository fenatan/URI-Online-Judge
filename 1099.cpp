#include <stdio.h>

int main(){
    int v[10001], n,x,y, maior, menor;
    scanf("%d", &n);

    for(int i =0; i < n; i++){
        scanf("%d %d", &x, &y);
        if(x > y){
            maior = x; menor = y;
        }else{
             maior = y; menor = x;
        }
        v[i]=0;
        for(int j = menor + 1; j < maior; j++){
            if(j % 2 != 0)
                v[i]+=j;
        }
    }

    for(int i =0; i < n; i++){
        printf("%d\n", v[i]);
    }

    return 0;
}
