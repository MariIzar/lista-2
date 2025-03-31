#include <stdio.h>
int main(){
    float A, B, C;
    printf ("Digite um valor para A: ");
    scanf ("%f",&A);
    printf ("Digite um valor para B: ");
    scanf ("%f",&B);
    C = A;
    A = B;
    B = C;
    printf ("O valor de A e B e: %f %f", A, B);
    return 0;
}