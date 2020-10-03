#include <stdio.h>

int main()
{
    //Lee el tiempo en segundos y te dice que distancia recorre
    float S;
    printf("Inserte los segundos: ");
    scanf("%f", &S);
    float D= S*300000;
    printf ("la ditancia recorrida es de %.3f km", D);
    return 0;
}
