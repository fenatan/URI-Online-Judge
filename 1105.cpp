#include <stdio.h>

int main(){
    int b,n,i, reservas[21], d,c,v,flag;

    while(scanf("%d %d", &b, &n) and b!= 0 and n !=0){

    for(i=1; i <= b; i++){
        scanf("%d", &reservas[i]);
    }

    for(i = 1; i <=n; i++){
        scanf("%d %d %d", &d, &c, &v);
        reservas[d] -=v;
        reservas[c] +=v;
    }
    flag = 0;
    for(i=1; i <= b; i++){
        if(reservas[i] < 0){
            flag = 1;
            break;
        }
    }

    (flag == 0) ? printf("S\n") : printf("N\n");

}
    return 0;
}
