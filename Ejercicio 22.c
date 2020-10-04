#include <stdio.h>
#include <conio.h>
int main()
{
    // Datos de automovil
    float costo, origen;
    char marca;
    printf("ingresa la marca ");
    scanf("%s", &marca);
    printf("ingresa el origen\n 1 Alemania,\n 2 Japon,\n 3 italia, \n 4 Usa: ");
    scanf("%f", &origen);
    printf("ingresa el costo ");
    scanf("%f", &costo);
    if (origen==1)
    {
        printf("El impuesto es del 20 porciento");
        float impuesto=costo*.20;
        float pv=costo+impuesto;
        printf ("\n el impuesto es de %f", impuesto);
        printf ("\n el precio de venta es de %f", pv);
    }
    else {
        if (origen==2)
        {
        printf("El impuesto es del 30 porciento");
        float impuesto=costo*.30;
        float pv=costo+impuesto;
        printf ("\n el impuesto es de %f", impuesto);
        printf ("\n el precio de venta es de %f", pv);
        }
    else {
        if (origen==3)
        {
        printf("El impuesto es del 15 porciento");
        float impuesto=costo*.15;
        float pv=costo+impuesto;
        printf ("\n el impuesto es de %f", impuesto);
        printf ("\n el precio de venta es de %f", pv);
        }
        else {
            if (origen==4)
            {
        printf("El impuesto es del 8 porciento");
        float impuesto=costo*.8;
        float pv=costo+impuesto;
        printf ("\n el impuesto es de %f", impuesto);
        printf ("\n el precio de venta es de %f", pv);
            }
        }
    }
    }
    return 0;
}
