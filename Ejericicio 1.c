#include <stdio.h>
int main()
{
float X, Y, P;
// Saca el precio del m cuadrado de un tereno cuadrado o rectangular
    printf("inserte el ancho del terreno rectangular o cuadrado en metros:");
    scanf(" %f", &X);
     printf("\n inserte la longitude del terreno rectangular o cuadrado en metros:");
     scanf("%f", &Y);
     printf("¿a cuanto esta el metro cuadrado?: ");
     scanf("%f", &P);
     float TP= (X*Y)*P;
     printf ("el valor del terreno es: %.2f", TP);
      return 0;
}
