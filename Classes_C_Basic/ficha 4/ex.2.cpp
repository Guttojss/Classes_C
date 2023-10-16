#include <stdio.h>
main()
{
	float bruto,liq,taxa;

	printf("Escreva o seu Salario Bruto: \n"); scanf("%f",&bruto);
	if (bruto<1000)
	{
		taxa = bruto * 0.05;
		liq = bruto - taxa;
		printf("O salario liq e : %f \n A taxa e de : %f\n" ,liq,taxa);
	}

	if (bruto >= 1000 and bruto < 5000)
	{
		taxa = bruto * 0.11;
		liq = bruto - taxa;
		printf("O salario liq e : %f \n A taxa e de : %f\n" ,liq,taxa);
	}

	if (bruto >= 5000)
	{
		taxa = bruto*0.35;
		liq = bruto - taxa;
		printf("O salario liq e : %f \n A taxa e de : %f\n" ,liq,taxa);
	}
}

