#import <stdio.h>
main()
{
	int vetor[100],dim,i;
	printf("Qual a dimensao do vetor?");scanf("%d",&dim);
	for(i=0;i!=dim;i++)
	{
		printf("Preencha o vetor : ");scanf("%d",&vetor[i]);
	}
	for(i=0;i!=dim;i++)
		if(vetor[i]%3==0)
			printf("%d  ",vetor[i]);
}
