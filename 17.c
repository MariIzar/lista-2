#include <stdio.h>
int main() {
    int a1, r, a10;
    printf("Digite o primeiro termo (a1) da PA: ");
    scanf("%d", &a1);
    printf("Digite a razao (r) da PA: ");
    scanf("%d", &r);
    a10 = a1 + 9 * r;
    printf("O decimo termo da PA e: %d\n", a10);
    return 0;
}
