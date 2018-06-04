#include <stdio.h>
#include <math.h>
int main(){
    double n;
    scanf("%lf", &n);
    int aux = n;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", aux/100);
    aux = aux - ((aux/100)*100);
    printf("%d nota(s) de R$ 50.00\n", aux/50);
    aux = aux - ((aux/50)*50);
    printf("%d nota(s) de R$ 20.00\n", aux/20);
    aux = aux - ((aux/20)*20);
    printf("%d nota(s) de R$ 10.00\n", aux/10);
    aux = aux - ((aux/10)*10);
    printf("%d nota(s) de R$ 5.00\n", aux/5);
    aux = aux - ((aux/5)*5);
    printf("%d nota(s) de R$ 2.00\n", aux/2);
    aux = aux - ((aux/2)*2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", aux);
    aux = (n - trunc(n)) * 100;
    printf("%d moeda(s) de R$ 0.50\n", aux/50);
    aux = aux - ((aux/50)*50);
    printf("%d moeda(s) de R$ 0.25\n", aux/25);
    aux = aux - ((aux/25)*25);
    printf("%d moeda(s) de R$ 0.10\n", aux/10);
    aux = aux - ((aux/10)*10);
    printf("%d moeda(s) de R$ 0.05\n", aux/5);
    aux = aux - ((aux/5)*5);
    printf("%d moeda(s) de R$ 0.01\n", aux);


    return 0;
}
