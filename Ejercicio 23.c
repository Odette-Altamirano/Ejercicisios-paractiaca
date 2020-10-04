#include <stdio.h>

int main ()
{
    float a, b, c, d, e, f;
    printf("Ingresa el valor de a: ");
    scanf("%f",&a);
    printf("Ingresa el valor de b: ");
    scanf("%f",&b);
    printf("Ingresa el valor de c: ");
    scanf("%f",&c);
    printf("Ingresa el valor de d: ");
    scanf("%f",&d);
    printf("Ingresa el valor de e: ");
    scanf("%f",&e);
    printf("Ingresa el valor de f: ");
    scanf("%f",&f);
    float W=(a*e)-(b*d);
      if (W=0)
      {
          printf ("No hay solucion");

      }
      else
      {
         printf("Los valos son: \n");
         float X=((c*e)-(b*f))/((a*e)-(b*d));
         printf("X= %f", X);
         float Y=((a*f)-(c*d))/((a*e)-(b*d));
         printf("Y= %f", Y);
         return 0;
      }

    return 0;
}
