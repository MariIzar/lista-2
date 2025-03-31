#include <stdio.h>
#include <math.h>
int main(){
    float lado, perimetro, area, diagonal;
    printf ("Digite o valor do lado do quadrado: ");
    scanf ("%f", &lado);
    perimetro = 4*(lado);
    area = lado*lado;
    diagonal = lado*sqrt(2);
    printf ("O perimetro e: %2f\n" ,perimetro);
    printf ("A area e: %2f\n", area);
    printf ("A diagonal e: %2f\n", diagonal);
    return 0;
}