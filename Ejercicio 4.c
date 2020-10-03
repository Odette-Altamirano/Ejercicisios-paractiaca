#include <stdio.h>
int main()
{
    // dara el valor de Y cuando es igual a 3x^2+7x-15
    float x;
    printf ("si la ecuación es y=3x^2+7x-15 ingresa el valor de x:");
    scanf("%f", &x);
    float Y=((3*(x*x))+(7*x)-15);
    printf ("El valor de Y es igual a %f", Y);

    return 0;
}
