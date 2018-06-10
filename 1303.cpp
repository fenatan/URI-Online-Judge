#include <stdio.h>
#include <algorithm>

struct time{
    int id;
    double cestasM = 0;
    double cestasR = 0;
    int pontos = 0;
};

int func(struct time a, struct time b){
    if(a.pontos > b.pontos)
        return 1;
    if(b.pontos > a.pontos)
        return 0;
    if((a.cestasM/a.cestasR) > (b.cestasM/b.cestasR)){
        return 1;
    }
    if((b.cestasM/b.cestasR) > (a.cestasM/a.cestasR))
        return 0;
    if(a.cestasM > b.cestasM)
        return 1;
    if(b.cestasM > a.cestasM)
        return 0;
    if(a.id < b.id)
        return 1;
    else
        return 0;
}
int main(){
    int n,x,y,z,w;
    struct time vet[1002];
    int cont = 0;
    while(true){
        scanf("%d", &n);
        if(n == 0) break;
        cont++;

        for(int i =0; i < (n*(n-1))/2; i++){
            scanf("%d %d %d %d", &x,&y,&z,&w);
            vet[x].cestasM+=y; vet[x].cestasR+=w; vet[x].id=x;
            vet[z].cestasM+=w; vet[z].cestasR+=y; vet[z].id=z;
            if(y > w){
                vet[x].pontos+=2;
                vet[z].pontos+=1;
            }else{
                vet[x].pontos+=1;
                vet[z].pontos+=2;
            }
        }
        std::sort(vet+1, vet + n+1, func);
        if(cont!=1)
            printf("\n");
        printf("Instancia %d\n", cont);
        for(int i =1; i < n; i++){
            printf("%d ", vet[i].id);
            vet[i].cestasM =0; vet[i].cestasR =0; vet[i].pontos =0;
        }

        printf("%d\n", vet[n].id);
        vet[n].cestasM =0; vet[n].cestasR =0; vet[n].pontos =0;
    }
    return 0;
}
