#import <stdio.h>
main()
{
	int vetor[5],i,cont;
	for(i=0;i!=5;i++)
	{
		vetor[i]=(i+5*i)%(i+1);
		printf("\n%d\n",vetor[i]);
	}
}
