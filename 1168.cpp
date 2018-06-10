#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;
int main(){
    char c[1000];
    int n,soma;
    int v[10] = {6,2,5,5,4,5,6,3,7,6};
    scanf("%d", &n);
    for(int j=0; j < n; j++){
        scanf("%s", c);
        soma = 0;
        for(int i=0; i < strlen(c); i++){
            soma+= v[c[i]-48];
        }
        printf("%d leds\n", soma);
    }

    return 0;
}
