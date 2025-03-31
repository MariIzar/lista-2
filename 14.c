#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, y;
    printf ("Digite os valores para a,b,c: ");
    scanf ("%2f %2f %2f", &a , &b , &c);
    y = a+b/(c+a)+2*(a-b)+log2(64);
    printf ("O valor de y e %2f", y);
    return 0;
}