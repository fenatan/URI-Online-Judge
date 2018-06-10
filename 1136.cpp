#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j, n, b,flag;
    while(scanf("%d %d", &n, &b) && n!=0 && b!=0){
        int bolasDentro[91], bolasTotal[91], bolasPossiveis[91];;
        for(i = 0; i < b; i++)
            scanf("%d", &bolasDentro[i]);

        for(i = 0; i <= n; i++){
            bolasPossiveis[i] = 0;
            bolasTotal[i] = 1;
        }


        for(i=0; i < b; i++)
            for(j=i; j < b; j++){
                bolasPossiveis[abs(bolasDentro[i] - bolasDentro[j])] = 1;
                //printf("%d", abs(bolasDentro[i] - bolasDentro[j]));
            }

        flag = 0;
        for(i = 0; i <= n; i++){
            if(bolasPossiveis[i] != bolasTotal[i]){
                flag = -1; break;
            }
            //printf("%d %d\n", bolasPossiveis[i], bolasTotal[i]);
        }
        flag == -1 ? printf("N\n") : printf("Y\n");
    }
    return 0;
}
