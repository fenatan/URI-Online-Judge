#include <stdio.h>

int main(){
    int n,l,aux;
    scanf("%d", &n);
    int t[51];

    for(int i =0; i < n; i++){
        int cont = 0;
        scanf("%d",&l);
        for(int j = 0; j < l; j++)
            scanf("%d", &t[j]);
        for(int j = 0; j < l; j++){
            for(int k = j; k < l; k++){
                if(t[j] > t[k]){
                    aux = t[j];
                    t[j] = t[k];
                    t[k] = aux;
                    cont++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", cont);
    }
    return 0;
}
