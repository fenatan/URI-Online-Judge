#include <stdio.h>
#include <cstring>

int main(){
    int nc,n,aux;
    int c[231];
    scanf("%d", &nc);
    for(int i = 0; i < nc; i++){
        memset(c, 0, sizeof(c));
        scanf("%d", &n);
        int maior = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &aux);
            c[aux]+=1;
            if(aux > maior)
                maior = aux;
        }
        for(int j = 1; j < maior; j++){
           if(c[j] >= 1){
                for(int i = 1; i <= c[j]; i++)
                    printf("%d ", j);
           }
        }
        if(c[maior] > 1)
            for(int i = 1; i < c[maior]; i++)
                printf("%d ", maior);
        printf("%d\n", maior);

    }

    return 0;
}
