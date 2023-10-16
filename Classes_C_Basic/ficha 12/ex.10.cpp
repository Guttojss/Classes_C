#import <stdio.h>
main()
{
	int i,vetor[6];
	
	printf("Escreva 6 Numeros : \n");
	for (i=0;i!=6;i++)
	{
		printf("\nEscreva um numero :");scanf("%d",&vetor[i]);
	}
	
	for(i=5;i>=0;i--)
		printf("%d  ",vetor[i]);

}
