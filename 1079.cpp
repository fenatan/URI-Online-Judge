#include <stdio.h>

int main(){
    int n;
    float v[100000];
    scanf("%d", &n);
    for(int i=0; i < 3*n; i++)
        scanf("%f", &v[i]);

    for(int i=2; i < 3*n; i = i +3){
        printf("%.1f\n", (v[i]*5 + v[i-1]*3 + v[i-2]* 2)/10);
    }
    return 0;
}
