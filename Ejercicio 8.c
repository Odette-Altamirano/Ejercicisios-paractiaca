#include <stdio.h>

int main()
{
    // lee el radio de un circulo y da el area
    float r;
    printf("Ingresa el radio del circulo:");
    scanf("%f", &r);
    float a=3.14159265*(r*r);
    printf("el area es %f", a);

    return 0;
}
