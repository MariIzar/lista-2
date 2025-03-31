#include <stdio.h>
#include <math.h>
int main() {
    float n, d, r;
    printf ("Digite o numerador e o denominador: ");
    scanf ("%2f %2f", &n, &d);
    r = n / d;
    printf ("O valor em decimal e: %2f", r);
    return 0;
}