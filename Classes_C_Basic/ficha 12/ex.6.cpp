// ex 6 
/*
pe�a a dimens�o de um vetor, solicite todos os elementos desse
vetor e ainda pe�a um n�mero. No final, dever� mostrar o produto desse n�mero pelo vetor.
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
