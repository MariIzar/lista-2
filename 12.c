#include <stdio.h>
#include <math.h>
int main(){
    float cat1, cat2, hipotenusa;
    printf ("Escreva os catetos: ");
    scanf ("%f %f", &cat1, &cat2);
    hipotenusa = sqrt(pow(cat1,2)+pow(cat2,2));
    printf ("A hipotenusa e %2f", hipotenusa);
    return 0;
}