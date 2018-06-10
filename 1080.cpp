#include <stdio.h>

int main(){
    int n[101], pos, maior;

    scanf("%d", &n[0]);
    maior = n[0];
    pos = 1;

    for(int i =1; i < 100; i++){
        scanf("%d", &n[i]);
        if(n[i] > maior){
            maior = n[i];
            pos = i + 1;
        }
    }

    printf("%d\n%d\n", maior, pos);
    return 0;
}
