#include <stdio.h>

int main(){
    int t, veti[5], vetp[5];
    int conti = 0; int contp = 0;
    for(int i =0; i < 15; i++){
        scanf("%d", &t);
        if( t % 2 == 0){
            vetp[contp] = t;
            contp++;
        }else{
            veti[conti] = t;
            conti++;
        }

        if(conti == 5){
            conti = 0;
            for(int j = 0; j < 5; j++)
                printf("impar[%d] = %d\n",j, veti[j]);
        }
        if(contp == 5){
            contp = 0;
            for(int j = 0; j < 5; j++)
                printf("par[%d] = %d\n",j, vetp[j]);
        }
    }

    for(int j = 0; j < conti; j++)
                printf("impar[%d] = %d\n",j, veti[j]);

    for(int j = 0; j < contp; j++)
                printf("par[%d] = %d\n",j, vetp[j]);
    return 0;
}
