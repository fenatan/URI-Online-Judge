#include <stdio.h>

int main(){
    float n1,n2,n3,n4,ex;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    float media = (n1 * 2 + n2 * 3 + n3 * 4 + n4)/10;
    if(media >= 7.0)
        printf("Media: %.1f\nAluno aprovado.\n", media);
    else
        if(media < 5.0)
            printf("Media: %.1f\nAluno reprovado.\n", media);
        else{
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            scanf("%f", &ex);
            printf("Nota do exame: %.1f\n", ex);
            media = (media + ex)/2;
            (media >= 5.0) ? printf("Aluno aprovado.\nMedia final: %.1f\n", media) : printf("Aluno reprovado.\nMedia final: %.1f\n", media);
        }

    return 0;
}
