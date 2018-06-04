#include <stdio.h>

int main(){
    double PI = 3.14159;
    double raio,result;
    scanf("%lf", &raio);
    result = raio * raio * PI;
    printf("A=%.4lf\n", result);
    return 0;
}
