#import <stdio.h>
main()
{
	int vetor[5],i;
	
	printf("Preencha um vetor com 5 elementos");
	for(i=0;i!=5;i++)
		scanf("%d",&vetor[i]);
	for(i=0;i!=5;i++)
	{
		vetor[i]=vetor[i]*vetor[i];
		printf("%d  ",vetor[i]);
	}
}
