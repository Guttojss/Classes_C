#include <stdio.h>
main()
{
int mes;

printf("Escreva Um Mes em formato numerico ex.:(12/1/22)\n"); scanf("%d",&mes);

	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes== 8 || mes== 10 || mes == 12)
		printf("O mes tem 31 dias");
	else 
		if (mes == 2)
			printf("O mes tem 28 ou 29 dias");
		else
			if (mes == 4 || mes==6 || mes==9 || mes==11)
				printf("O mes tem 30 dias");
			else
				printf("mes invalido");
}
