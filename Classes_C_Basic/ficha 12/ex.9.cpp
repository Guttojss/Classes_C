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
	//falta por a posi�ao
	printf("O maior � %d e a posi�ao � %d\nO menor � %d e a posi�ao � %d",maior,pos_maior+1,menor,pos_menor+1);
}
