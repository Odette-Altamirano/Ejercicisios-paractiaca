#include<stdio.h>
#include<math.h>

int main ()
{
// cual es el numero mayor

	float n1, n2, n3, n4;


	printf("Dame el primer valor: ");
	scanf("%f",&n1);

	printf("Dame el segundo valor: ");
	scanf("%f",&n2);

	printf("Dame el tercer valor: ");
	scanf("%f",&n3);

	printf("Dame el cuarto valor: ");
	scanf("%f",&n4);

	if(n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4) //! es diferente a
	{
		if(n1 > n2 && n1 > n3 && n1 > n4)
		{
			printf("El numero mayor es: %.2f",n1);
		}
		else if(n2 > n3 && n2 > n4)
		{
			printf("El numero mayor  es: %.2f",n2);
		}
		else if(n3 > n4)
		{
			printf("El numero mayor es: %.2f",n3);
		}
		else
		{
			printf("El numero mayor es: %.2f",n4);
		}
	}
	else
	{
		printf("Hay numeros iguales");
	}

	return 0;
}
