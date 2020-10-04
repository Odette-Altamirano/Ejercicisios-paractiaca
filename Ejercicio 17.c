#include <stdio.h>

int main ()
{
    float a, b, c, a1, b1, c1;
    printf("Ingresa el angulo a: ");
    scanf("%f", &a);
    printf("Ingresa el angulo b: ");
    scanf("%f", &b);
    printf("Ingresa el angulo c: ");
    scanf("%f", &c);
    float l1, l2, l3;
    printf("Ingresa el lado 1: ");
    scanf("%f", &l1);
    printf("Ingresa el lado 2: ");
    scanf("%f", &l2);
    printf("Ingresa el lado 3: ");
    scanf("%f", &l3);
    printf("Ingresa el angulo a del segundo triangulo: ");
    scanf("%f", &a1);
    printf("Ingresa el angulo b del segundo triangulo: ");
    scanf("%f", &b1);
    printf("Ingresa el angulo c del tercer trinagulo: ");
    scanf("%f", &c1);
    float L1, L2, L3;
    printf("Ingresa el lado 1 del segundo triangulo: ");
    scanf("%f", &L1);
    printf("Ingresa el lado 2 del segundo triangulo: ");
    scanf("%f", &L2);
    printf("Ingresa el lado 3 del segundo treingulo: ");
    scanf("%f", &L3);
    if (a==a1 && b==b1 && c==c1 && l1==L1 && l2==L2 && l3==L3)
    {
        printf ("son congruentes");
    }
    else {
        printf ("no son congruentes");
    }

    return 0;
}
