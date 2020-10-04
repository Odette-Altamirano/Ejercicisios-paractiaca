#include <stdio.h>

int main()
{
    float t,pu;
    //lee cantidad de trajes y precio unitario y te da descuento el primero del 50 el segundo 55 el tercero 60 y mas de 3 65
    printf("Cuantos trajes llevas: ");
    scanf("%f", &t);
    printf("cuale es el precio unitario: ");
    scanf("%f", &pu);
    if (t==1)
        {
        printf("tiene un descuento del 50 porciento \n");
        float pu2=pu*t;
        float pd= pu2*.50;
        float pcd=pu2-pd;
        printf ("subtotal= %.2f \n", pu2);
        printf("descuento= %.2f \n", pd);
        printf("total= %.2f", pcd);
    }
    else
    {
        if (t==2){
        printf("tiene un descuento del 55 porciento \n");
        float pu2=pu*t;
        float pd= pu2*.55;
        float pcd=pu2-pd;
        printf ("subtotal= %.2f\n", pu2);
        printf("descuento= %.2f\n", pd);
        printf("total= %.2f", pcd);
        }
        else
        {
            if (t==3){
        printf("tiene un descuento del 60 porciento \n");
        float pu2=pu*t;
        float pd= pu2*.60;
        float pcd=pu2-pd;
        printf ("subtotal= %.2f\n", pu2);
        printf("descuento= %.2f\n", pd);
        printf("total= %.2f", pcd);
            }
            else
            {
                if (t>3){
        printf("tiene un descuento del 65 porciento \n");
        float pu2=pu*t;
        float pd= pu2*.65;
        float pcd=pu2-pd;
        printf ("subtotal= %.2f\n", pu2);
        printf("descuento= %.2f \n", pd);
        printf("total= %.2f", pcd);
                }
            }
        }
    }


    return 0;
}
