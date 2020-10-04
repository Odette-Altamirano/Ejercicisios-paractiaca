#include <stdio.h>

int main()
{
    // saber si un trapeio es isosceles
    float a, b;
    printf ("Ingresa el angulo A de la base del trapecio: ");
    scanf ("%f", &a);
    printf ("ingresa el andulo B de la base del tapecio: ");
    scanf ("%f", &b);
    if (a==b)
    {
        printf ("es isoceles");
    }
    else
    {
        printf ("no es isoceles");
    }

    return 0;
}
