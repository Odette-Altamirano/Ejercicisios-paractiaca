#include <stdio.h>

int main()
{
// centigrados a fahrenheit
    float C;
    printf("Ingresa la temperatura a centígrados: ");
    scanf ("%f",&C);
    float F=(1.8*C+32);
    printf ("Es igual a %.2f Fahrenheit", F);

    return 0;
}
