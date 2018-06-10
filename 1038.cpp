#include <stdio.h>

int main(){
    int c,q; double v;
    scanf("%d %d", &c, &q);
    if(c == 1)
        v = q * 4;
    else
        if(c == 2)
            v = q * 4.5;
        else
            if(c == 3)
                v = q * 5;
            else
                if(c == 4)
                    v = q * 2;
                else
                    v = q * 1.5;

    printf("Total: R$ %.2lf\n", v);
    return 0;
}
