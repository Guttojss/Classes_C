#import <stdio.h>
main()
{
	int vetor[15],i,j,soma,media;
	
	printf("Insira A Nota de 15 alunos : \n");
	for(i=0;i!=15;i++)
	{
		printf("\nInsira A nota : ");scanf("%d",&vetor[j]);
		soma=soma+vetor[j];
	}
	media=soma/15;
	printf("A media é : %d\n",media);
}
