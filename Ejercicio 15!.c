#include <stdio.h>

int main()
{
      float a, b, c;
      printf ("Ingresa el angulo A: ");
      scanf("%f", &a);
      printf("Ingresa el angulo B: ");
      scanf("%f", &b);
      printf("Ingresa el angulo C: ");
      scanf("%f", &c);
      if (a==90)
      {
          printf ("triangulo rectangulo");
      }
      else
      {
          if (b>90 && b<180)
          {
              printf("triagulo obtusangulo");
          }
          else
          {
              if (c<90)
              {
                  printf ("Treiangulo acutangulo");
              }
          }
      }

return 0;
}

