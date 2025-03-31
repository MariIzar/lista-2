#include <stdio.h>
#include <math.h>
int main(){
    int a1, r;
    double a5;
    printf("Digite o primeiro termo (a1) da PG: ");
    scanf("%d", &a1);
    printf("Digite a razao (r) da PG: ");
    scanf("%d", &r);
    a5 = a1 * pow(r, 4);
    printf("O quinto termo da PG e: %2F\n", a5);
    return 0;
}