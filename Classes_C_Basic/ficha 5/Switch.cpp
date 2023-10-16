#include <stdio.h>
main()
{
	int mes;

	printf("Escreva Um Mes em formato numerico ex.:(12/1/22)\n"); scanf("%d",&mes);

	switch(mes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("O Mes tem 31 dias\n"); break;
		case 2: printf("O Mes tem 28 ou 29 dias\n"); break;
		case 4:
		case 6:
		case 9:
		case 11: printf("O Mes tem 30 dias\n"); break;
		default : printf("O mes e invalido\n");
	}	
}
