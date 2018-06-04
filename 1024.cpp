#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    char c[10001];

    scanf("%d", &n);

    for(int i=0; i < n; i++){
        scanf(" %[^\n]", c);
        int tam = strlen(c);
        for(int j =0; j < tam; j++){
            if(c[j] >=65 && c[j] <= 90 || c[j] >=97 && c[j] <= 122)
                c[j]+= 3;
        }
        int cont = tam;
        char aux[1];

        reverse(c, c+tam);

        for(int j=tam/2; j < tam; j++){
            c[j]-=1;
        }
        printf("%s\n", c);
    }
    return 0;
}
