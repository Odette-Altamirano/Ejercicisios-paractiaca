#include <stdio.h>
#include <math.h>
int main()
{
     float x, y, z, w, b;

     printf("ingresa el valor de x:");
     scanf("%f", &x);
     printf("ingresa el valor de y:");
     scanf("%f", &y);
     printf("ingresa el valor de z:");
     scanf("%f", &z);
     printf("ingresa el valor de w:");
     scanf("%f", &w);
     printf("ingresa el valor de b:"); /*POTENCIA DUDA*/
     scanf("%f", &b);
     float F=pow((4*pow(x,2)*12*pow(y,2)),2)/((4*pow(x,1.0/2)/pow(b,3.0/4)));
     printf ("F es igual a %lg", F);



    return 0;
}
