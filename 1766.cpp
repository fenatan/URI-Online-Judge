#include <stdio.h>
#include <algorithm>
#include <string.h>
struct rena{
    char nome[101];
    int peso;
    int idade;
    double altura;
};

int func(struct rena a, struct rena b){
    if(a.peso > b.peso)
        return 1;
    if(b.peso > a.peso)
        return 0;
    if(b.idade < a.idade)
        return 0;
    if(a.idade < b.idade)
        return 1;
    if(b.altura < a.altura)
        return 0;
    if(a.altura < b.altura)
        return 1;
    if(strcmp(a.nome, b.nome) < 0)
        return 1;
    else
        return 0;
}

int main(){
    int t,n,m;
    struct rena r[10003];
    scanf("%d", &t);

    for(int k =1; k <= t; k++){
        scanf("%d %d", &n, &m);
        for(int i =0; i < n; i++)
            scanf("%s %d %d %lf", &r[i].nome, &r[i].peso, &r[i].idade, &r[i].altura);
        std::sort(r, r + n, func);
        printf("CENARIO {%d}\n", k);
        for(int i =0; i < m; i++)
          printf("%d - %s\n", i+1, r[i].nome);
    }
    return 0;
}
