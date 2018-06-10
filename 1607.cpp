#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,soma;
    char a[10001], b[10001];

    scanf("%d", &n);

    for(int i=0; i < n; i++){
        scanf("%s %s",a,b);
        soma = 0;
        for(int j =0; j < strlen(a); j++){
            if(a[j] > b[j])
                soma+= abs(26 - (a[j] - b[j]));
            else
                soma+= abs(a[j] - b[j]);
        }
        printf("%d\n", soma);
    }
    return 0;
}
