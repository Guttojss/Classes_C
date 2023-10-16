#import <stdio.h>
#import <time.h>
#import <stdlib.h>
//media nao funciona.
main()
{
//Main Program
int cont,dim,nmr;
printf("Escolha quantas vezes deseja jogar\n");scanf("%d",&dim);
for(int vezes=0;vezes!=dim;vezes++)
{
	srand(time(NULL));
	int rnmr= rand() % 100 + 1;
	printf("Bem-Vindo escolha um numero entre 0 e 100\n");scanf("%d",&nmr);
	do
	{
		if(nmr<rnmr)
		{
		printf("\nO Numero é mais alto\ntente denovo :\n");scanf("%d",&nmr);
		}
		else if(nmr>rnmr)
		{
		printf("\nO Numero é mais baixo\ntente denovo :\n");scanf("%d",&nmr);
		}
		cont++;
	}
	while(nmr!=rnmr);
	printf("\nAcertou o numero Parabéns, o numero era %d, voce teve %d tentativas\n",rnmr,cont); 
	cont++;
}
float media=dim/cont;
printf("Nas %dx que jogou a média de tentativas foi : %d\n",dim,media);
}
