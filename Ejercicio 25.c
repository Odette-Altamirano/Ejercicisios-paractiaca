#include <stdio.h>

int main()
{
    // C a F o F a C
    float C, F, X;
    printf("Quieres covertir 1 Centigrados a Farenheit\n 2 Farenheir a Centigrados: ");
    scanf("%f", &X);
    if (X==1)
    {
        printf("Inserte los centigrados: ");
        scanf("%f", &C);
        F=((9/5)*C)+32;
        printf(" son %f F", F);

    }
    else
    {
        if (X==2)
        {
        float F1;
         printf("Inserte los farenheit: ");
        scanf("%f", &F1);
        float C1=((F1-32)*(0,5555));
        printf("son %f C", C1);
        }
    }



    return 0;
}
