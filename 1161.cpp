#include <stdio.h>

long long fat(int n){
    int i;
    long long f = 1;
    for(i=n; i > 1; i--){
        f=f*i;
    }
    return f;
};

int main(){
    int n1, n2;
    while(scanf("%d%d", &n1,&n2)!=EOF){
        printf("%lld\n", fat(n1) + fat(n2));
    }
    return 0;
}
