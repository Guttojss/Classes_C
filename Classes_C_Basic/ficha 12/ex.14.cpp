#import <stdio.h>
main()
{
	int vetora[10],vetorb[10],vetorc[10],i;
	printf("\nInsira 10 numeros para o vetor A :");
	for(i=0;i!=10;i++)
	{
		printf("\nInsira o numero : ");scanf("%d",&vetora[i]);
	}
	printf("\nInsira 10 numeros para o vetor B :");
	for(i=0;i!=10;i++)
	{
		printf("\nInsira o numero : ");scanf("%d",&vetorb[i]);
	}
	for(i=0;i!=10;i++)
	{
		vetorc[i]=vetora[i]-vetorb[i];
		printf("\n%d\n",vetorc[i]);
	}
}

