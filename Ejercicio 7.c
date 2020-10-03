#include <stdio.h>
#include <conio.h>

int main()
{
    // va a sacar urilidad, impuesto y precio de venta de un producto
    char producto [30];
    printf("Ingresa el nombre del producto:");
    scanf ("%s", &producto);
    float costo;
    printf("Cual es su costo:");
    scanf("%f", &costo);
    printf("nombre: %s \n", producto);
    float utilidad= costo*1.5;
    printf("Utilidad de 150 porciento es de %.3f pesos\n", utilidad);
    float precio=costo+utilidad;
    printf("Precio de venta es de %.3f pesos\n", precio);
    float impuesto= precio*.15;
    printf("Impuesto seria de %.3f", impuesto);
    return 0;
}
