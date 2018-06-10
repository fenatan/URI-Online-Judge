#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
int main(){
    int b,e,x;
    char s[1000];
    scanf("%d", &x);
    for(int i =0; i < x; i++){
        scanf("%d %d", &b, &e);
        for(int i=b; i <= e; i++){
            printf("%d", i);
        }
        for(int i=e; i >= b; --i){
            sprintf(s,"%d",i);
            std::reverse(s,s+strlen(s));
            printf("%s", s);
        }
        printf("\n");
    }
    return 0;
}
