#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, ht;
    double sh;
    scanf("%d%d%lf", &n, &ht, &sh);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, ht*sh);
    return 0;
}
