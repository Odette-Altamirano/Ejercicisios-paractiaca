#include <stdio.h>

int main()
{
    //calcula columen y area de una esfera
    float r;
    printf("Ingresa el radio de la esfera:");
    scanf("%f", &r);
    float a=((4*(3.14159265*(r*r*r)))/3);
    printf("el volumen es %f", a);
    float b=((4*(3.14159265*(r*r))));
    printf("el area es %f", b);


    return 0;
}
