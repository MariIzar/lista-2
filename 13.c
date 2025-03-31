#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    float raio, perimetro, area;
    printf ("Digite o raio do circulo: ");
    scanf ("%2f" , &raio);
    perimetro = 2*PI*raio;
    area = PI*pow(raio,2);
    printf ("O perimetro e: %2f\n", perimetro);
    printf ("A area e: %2f" , area);
    return 0;

}