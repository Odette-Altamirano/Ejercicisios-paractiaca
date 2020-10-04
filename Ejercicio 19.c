#include <stdio.h>
#include <conio.h>
int main()
{
    float T, Ht, He, Pph;
    char nombre [30];
    printf("nombre: ");
    scanf("%s", &nombre);
    printf("tipo de empleado: ");
    scanf("%f", &T);
    printf("Horas trabajadas si son más de 40 las demas ingresalas en horas extra: ");
    scanf("%f", &Ht);
    printf("Horas extra si no tienes pon 0:");
    scanf("%f", &He);
    printf("Pago por hora: ");
    scanf("%f", &Pph);
    if (T==1)
    {
     printf("%s \n",nombre);
     float SsHe= Ht*Pph;
     float Pe=Pph*1.5;
     float Se=He*Pe;
     float S=SsHe+Se;
     printf ("Sueldo a pagar es de: %f",S);
     return 0;
    }
    else
    {
        if (T==2)
        {printf("%s \n",nombre);
     float SsHe= Ht*Pph;
     float Pe=Pph*2;
     float Se=He*Pe;
     float S=SsHe+Se;
     printf ("Sueldo a pagar es de: %f",S);
     return 0;
        }
        else
        {
            if (T==3)
            {
     printf("%s \n",nombre);
     float SsHe= Ht*Pph;
     float Pe=Pph*2.5;
     float Se=He*Pe;
     float S=SsHe+Se;
     printf ("Sueldo a pagar es de: %f",S);
     return 0;
            }
            else
            {
                if (T==4)
                {
     printf("%s \n",nombre);
     float SsHe= Ht*Pph;
     float Pe=Pph*3;
     float Se=He*Pe;
     float S=SsHe+Se;
     printf ("Sueldo a pagar es de: %f",S);
     return 0;
                }
            }
        }
    }
return 0;
}
