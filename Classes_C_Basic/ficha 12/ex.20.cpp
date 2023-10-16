#import <stdio.h>
main()
{
	int matriz[4][4],j,i,cont;
	for(i=0;i!=4;i++)
		for(j=0;j!=4;j++)
		{
			printf("Escreva um numero : \n");scanf("%d",&matriz[i][j]);
			if (matriz[i][j]>10)
				cont++;
		}
	printf("Dentro todos os numeros que inseriu , %d numeros sao maiores que 10\n",cont);	
}
