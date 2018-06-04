#include <stdio.h>
#include <stdlib.h>

int main(){
    int c1,c2, n1,n2;
    double v1, v2;
    scanf("%d%d%lf%d%d%lf", &c1, &n1, &v1, &c2, &n2, &v2);
    printf("VALOR A PAGAR: R$ %.2lf\n", v1*n1 + v2*n2);
    return 0;
}
