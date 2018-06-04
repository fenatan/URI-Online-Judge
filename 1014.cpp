#include <stdio.h>
#include <stdlib.h>

int main(){
    int d;
    float l;
    scanf("%d%f", &d, &l);
    printf("%.3f km/l\n", d/l);
    return 0;
}
