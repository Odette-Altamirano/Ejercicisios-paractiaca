#include <stdio.h>
#include<math.h>
#include <conio.h>
int main()
{

	float c1, c2, c3, p;

	char nombre[20];

	printf("Dame el nombre del alumno: ");
	scanf("%s", &nombre);

	printf("Dame la primera calificacion: ");
	scanf("%f",&c1);

	printf("Dame la segunda calificacion: ");
	scanf("%f",&c2);

	printf("Dame la tercera calificacion: ");
	scanf("%f",&c3);

	p = (c1 + c2 +c3)/3;

	if(p>=7.0)
	{
		printf("Hola %s tu promedio es de: %.2f\n por lo que APROBASTE",nombre,p);
	}
	else
	{
		printf("Hola %s tu promedio es de: %f\n lo siento no aprobaste",nombre,p);
	}

    return 0;
}
