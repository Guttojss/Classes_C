#include <stdio.h>
main()
{
int dia,mes,ano;
	
printf("Intruduza Uma Data\n");
printf("Introduza O Dia : \n"); scanf("%d",&dia);
printf("Introduza O Mes : \n"); scanf("%d",&mes);
printf("Introduza O ano : \n"); scanf("%d",&ano);

printf("A Data que introduzio foi : %d/%d/%d\n",dia,mes,ano);

printf("A Data que introduzio ao contrario e : %d/%d/%d",ano,mes,dia);
}

