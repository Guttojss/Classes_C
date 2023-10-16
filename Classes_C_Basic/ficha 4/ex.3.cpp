#include <stdio.h>
main()
{
	int dia,mes,ano;

	printf("Escreva Uma Data\n");
	printf("Escreva o dia : \n");  scanf("%d",&dia);
	printf("Escreva o mes : \n");  scanf("%d",&mes);
	printf("Escreva o ano : \n");  scanf("%d",&ano);

	if (dia <= 1 || dia >31)
		printf("A data e invalida");
	else
		if (mes <1 || mes > 12)
		printf("a data e invalida");
		else 
			if (ano <1910 || ano >2023)
				printf("a data e invalida");
			else
				printf("A data e valida :) ");
}
