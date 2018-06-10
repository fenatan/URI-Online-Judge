#include <stdio.h>

int main(){
    double t;
    scanf("%lf", &t);

    for(int i =0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i,t);
        t = t/2;
    }
    return 0;
}
