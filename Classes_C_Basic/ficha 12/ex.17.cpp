#import <stdio.h>
main()
{
	char vetor[20];
	int conta,conte=0,conti,conto,contu,cont,i;
	for (i=0;i!=20;i++)
	{
		printf("\nInsira uma vogal :");scanf("%c",&vetor[i]);
		if (vetor[i]=='A' || vetor[i]=='a')
			conta++;
		else
			if(vetor[i]=='E' ||vetor[i]=='e')
			conte++;
		else
			if(vetor[i]=='I'||vetor[i]=='i')
			conti++;
		else
			if(vetor[i]=='O'||vetor[i]=='o')
			conto++;
		else
			if(vetor[i]=='U'||vetor[i]=='u')
			contu++;
	}
	printf("\nVoce inseriu : \n %d ,'A'\n %d ,'E'\n %d ,'I'\n %d ,'O'\n %d ,'U'\n",conta,conte,conti,conto,contu);
}

