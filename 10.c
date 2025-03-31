#include <stdio.h>
#include <math.h>
int main(){
    float largura, altura, perimetro, area, diagonal;
    printf ("Digite a largura: ");
    scanf ("%f", &largura);
    printf ("Digite a altura: ");
    scanf ("%f", &altura);
    perimetro = 2*(altura+largura);
    area = altura*largura;
    diagonal = sqrt(altura*altura+largura*largura);
    printf ("O perimetro e: %2f\n" ,perimetro);
    printf ("A area e: %2f\n", area);
    printf ("A diagonal e: %2f\n", diagonal);
    return 0;
}