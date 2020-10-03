#include <stdio.h>
int main()
{
    // lee cantidad de horas eh imprime su canditad en minutos segundos y días
    float H;
    printf ("Inserte la cantdad de horas:");
    scanf("%f", &H);
    float M= H*60;
    printf("\n Es igual a %f minutos", M);
    float S= M*60;
    printf("\n Es igual a %f segundos", S);
    float D=H*0.04166667;
    printf("\n Es igual a %.3f dias", D);

    return 0;
}
