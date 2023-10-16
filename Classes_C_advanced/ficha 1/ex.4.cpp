#import <stdio.h>
main()
{
	int vetor[4][4],matriz[4][4],i,j;
	//Prenchimento da matriz
	printf("Preencha a matriz : \n");
	for(i=0;i!=4;i++)
		for(j=0;j!=4;j++)
			scanf("%d",&vetor[i][j]);
	//Criaçao da matriz B
	for(i=0;i!=4;i++)
		for(j=0;j!=4;j++)
			if(i==j)
				matriz[i][j]=vetor[i][j]*3;
			else
				matriz[i][j]=vetor[i][j]*5;
	//output
	for(i=0;i!=4;i++){
		for(j=0;j!=4;j++)
			printf("%d ",matriz[i][j]);
	printf("\n");
	}
}
