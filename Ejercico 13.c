#include <stdio.h>

int main()
{
    // imprime el costo  del pedido y si excede delos 50 se pone un descuento
    float a, pu;
    printf("Cantidad de articulos en el pedido: ");
    scanf("%f",&a);
    printf ("Inserta el precio unitario: ");
    scanf ("%f",&pu);
    if (a>50)
    {
        printf("Tiene descuento del 10 porciento \n");
        float P=(a*pu);
        float PcD=P*.10;
        float Pt= P-PcD;
        printf ("quedaria el costo en %.3f pesos", Pt);
        return 0;}
        else{
         float p=(a*pu);
         printf ("El costo es de %f",p);
        }
        return 0;
}
