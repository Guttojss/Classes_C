// ex 6 
/*
peça a dimensão de um vetor, solicite todos os elementos desse
vetor e ainda peça um número. No final, deverá mostrar o produto desse número pelo vetor.
*/
#import <stdio.h>
main()
{
int i,dim,vetor[100],valor;
printf("Digite Uma Dimensao para um vetor : ");scanf("%d",&dim);
printf("\nDigite os valores Do Vetor : \n");
for(i=0;i<dim;i++)
{
scanf("%d",&vetor[i]);
}
printf("Introduza um valor para o vetor ser multiplicado por ele \n");
printf("Introduza o valor : ");scanf("%d",&valor);
for(i=0;i<dim;i++)
	{
	printf("\n%d  ",vetor[i]);
	printf("%d\n",vetor[i]*valor);
	}
}
