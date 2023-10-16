#import <stdio.h>
main()
{
	int i,vetor[10],menor,maior,pos_maior,pos_menor;
	printf("Intruduza 10 numeros :\n");
	for (i=0;i!=10;i++)
	{
		printf("\nEscreva 1 numero :");scanf("%d",&vetor[i]);
		if (maior <= vetor[i])
		{
			maior = vetor[i];
			pos_maior=i;
		}
		else
			if (menor >= vetor[i])
		{
			menor=vetor[i];
			pos_menor=i;
		}
	}
	//falta por a posiçao
	printf("O maior é %d e a posiçao é %d\nO menor é %d e a posiçao é %d",maior,pos_maior+1,menor,pos_menor+1);
}
