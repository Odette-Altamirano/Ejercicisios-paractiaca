#include <stdio.h>

int main()
{
    //Lee medicion en pies y lo convierte a yardas, pulgadas, cm y metros
    float pies;
    printf("Ingresa la medida en pies: ");
    scanf("%f", &pies);
    float pulgadas=pies*12;
    printf ("\n Es equivalente a %.2f pulgadas", pulgadas);
    float yarda= pies/3;
    printf("\n Es equivalente a %.2f yardas", yarda);
    float cm= pulgadas*2.54;
    printf("\n Es equivalente a %.2f centimetros", cm);
    float metros=cm/100;
    printf("\n Es equivalente a %.2f metros", metros);

    return 0;
}
