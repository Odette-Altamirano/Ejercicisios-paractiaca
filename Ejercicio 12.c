#include <stdio.h>

int main ()
{
    // Calculando el de X
    float x, y;
    printf("Ingresa el valor de x: ");
    scanf("%f",&x);
    if (x>=0)
   {
       y=x*x+6;
    printf("El valos de y es igual a %.2f", y);
    return 0;
   }
   else
   {
    y=3*x+6;
    printf("El valor de y es igual a %.2f", y);
    }
    return 0;

}
