#include <stdio.h>

int main()
{
    float d,pd;
    //Descuento de un hotel
    printf("Cuantos dias te quedas: ");
    scanf("%f", &d);
    printf("cuale es el precio por dia: ");
    scanf("%f", &pd);
    if (d>=5 && d<10)
        {
        printf("tiene un descuento del 10 porciento \n");
        float pd2=pd*d;
        float D= pd2*.10;
        float pcd=pd2-D;
        printf ("subtotal= %.2f \n", pd2);
        printf("descuento= %.2f \n", D);
        printf("total= %.2f", pcd);
    }
    else
    {
        if (d>=10 && d<15){
        printf("tiene un descuento del 15 porciento \n");
        float pd2=pd*d;
        float D= pd2*.15;
        float pcd=pd2-D;
        printf ("subtotal= %.2f\n", pd2);
        printf("descuento= %.2f\n", D);
        printf("total= %.2f", pcd);
        }
        else
        {
            if (d>=15){
        printf("tiene un descuento del 20 porciento \n");
        float pd2=pd*d;
        float D= pd2*.20;
        float pcd=pd2-D;
        printf ("subtotal= %.2f\n", pd2);
        printf("descuento= %.2f\n", D);
        printf("total= %.2f", pcd);
            }
        }
    }


    return 0;
}
