#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n,aux;
    int contp = 0;
    int contim =0;
    int p[100001], im[100001];
    scanf("%d", &n);
    for(int i =0; i < n; i++){
        scanf("%d", &aux);
        if(aux % 2 == 0){
            p[contp] = aux; contp++;
        }else{
            im[contim] = aux; contim++;
        }
    }
    sort(im, im+contim);
    sort(p, p+contp);

    for(int i =0; i < contp; i++)
        printf("%d\n", p[i]);

    for(int i =contim-1; i >= 0; --i)
        printf("%d\n", im[i]);

    return 0;
}
