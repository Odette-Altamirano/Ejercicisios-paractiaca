#include <stdio.h>

int main (){
// imprime el precio del terreno si mide más de 400 metros cuadrados de hace un descuento del 10%

    float X, Y, P;
    printf("inserte el ancho del terreno rectangular o cuadrado en metros:");
    scanf(" %f", &X);
     printf("\n inserte la longitude del terreno rectangular o cuadrado en metros:");
     scanf("%f", &Y);
     printf("¿a cuanto esta el metro cuadrado?: ");
     scanf("%f", &P);
     if (X*Y>400)
        {
        printf ("tiene un descuento del 10 porciento \n");
        float PD= (X*Y)*(P);
        float PcD=PD*.10;
        float PT= PD-PcD;
        printf ("quedaria el costo en %.3f pesos", PT);
        return 0;}
        else
     {
     float TP= (X*Y)*P;
     printf ("el valor del terreno es: %.2f", TP);
     }

return 0;
}
