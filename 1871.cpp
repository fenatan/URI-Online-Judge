#include <stdio.h>
#include <string.h>

int main(){
    int a,b;
    char s[1000];
    while(true){
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;
        sprintf(s,"%d",a + b);
        for(int i =0; i < strlen(s); i++){
            if(s[i] != '0')
                printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}
