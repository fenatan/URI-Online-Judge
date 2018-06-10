#include <stdio.h>

int main(){
    int h1, h2, m1, m2;

    while(true){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1==0 && m1==0 && h2==0  && m2==0)
            break;
        if(h1<h2)
            printf("%d\n", ((h2 - h1) * 60) + (m2-m1) );
        else
            if(h1>h2)
                printf("%d\n", ( (24 - (h1 - h2)) * 60) + (m2-m1) );
            else
                (m1>m2) ? printf("%d\n",  (24 * 60) + (m2-m1)) : printf("%d\n", (m2-m1));
    }
    return 0;
}
