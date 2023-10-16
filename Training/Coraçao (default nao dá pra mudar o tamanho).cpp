#import <stdio.h>
main()
{
printf("Preguisa de fazer uma cartinha logo pq nao fazer apenas um coraçao?\n\n");
int linhas,coluna;
//Parte de cima
for(coluna=1;coluna!=18;coluna++)
	if((coluna>=3 && coluna<=6) || (coluna>=12 && coluna<=15))
		printf("*");
	else
		printf(" ");
printf("\n");
//Piramide
for(linhas=0;linhas!=9;linhas++)
{
	for(coluna=1;coluna!=18;coluna++)
		if(coluna>=linhas+1 && coluna<=17-linhas)
			printf("*");
		else
			printf(" ");
printf("\n");
}
}

