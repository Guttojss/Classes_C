#import <stdio.h>
main()
{
	int vetor[4][4],i,j;
	//Prenchimento da matriz
	printf("Preencha a matriz : \n");
	for(i=0;i!=4;i++)
		for(j=0;j!=4;j++)
			scanf("%d",&vetor[i][j]);
	//Output
	for(i=0;i!=4;i++){
		for(j=0;j!=4;j++)
			if(i==j)
				printf("%d ",vetor[i][j]);
			else
				printf(" ");
	printf("\n");
	}
	printf("\n");
	//output1
	for(i=0;i!=4;i++){
		for(j=0;j!=4;j++)
			if(i==j)
				printf(" ");
			else
				printf("%d ",vetor[i][j]);
		printf("\n");
	}
}
