#include <stdio.h>
#include <string.h>
#include <algorithm>

int func(int a, int b){
    if(b > a)
        return 0;
    else
        return 1;
}
int main(){
    int n,m,aux;
    scanf("%d", &n);
    int a[1001], aux2[1001];

    for(int i =0; i < n; i++){
        int cont = 0;
        scanf("%d",&m);
        for(int j = 0; j < m; j++){
            scanf("%d", &a[j]);
            aux2[j] = a[j];
        }
        std::sort(a, a+m, func);
        for(int j = 0; j < m; j++){
            if(aux2[j] == a[j])
                cont++;
        }
        printf("%d\n", cont);
    }
    return 0;
}
