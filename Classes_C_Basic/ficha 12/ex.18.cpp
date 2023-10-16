#import <stdio.h>
main()
{
	int vetor[20],maior,menor,media,pares,impares,positivos,negativos,opcao,i,soma,mmedia,m;
	for(i=0;i!=20;i++)
	{
		printf("\nInsira o numero : ");scanf("%d",&vetor[i]); soma=soma+vetor[i]; m=getchar();
		//menor e maior
		if (maior <= vetor[i])
		{
			maior =vetor[i];
		}
		else
			if (menor >= vetor[i])
				menor=vetor[i];
		//impar e par
		if(vetor[i]%2==0)
			pares++;
		else
			impares++;
		//positivos e negativos
		if (m=='-')
			negativos++;
		else
			positivos++;
	}
	//média
	media=soma/20;
	for (i=0;i!=20;i++)
		if(media<vetor[i])
			mmedia++;
	//  Menu
	printf("\nOque deseja saber ?\n");
	printf("(1)mais baixo e alto ,(2)quantos elementos sao maiores que a Media ,(3)pares e impares,(4)positivos e negativos\n");
	printf("(5)ordem inversa? (0)sair do programa \n");scanf("%d",&opcao);
	
	switch(opcao)
	{
		case 1 : printf("o maior elemento é : %d\no menor elemento é : %d\n",maior,menor); break;
		case 2 : printf("A media é : %d \n%d elemetos sao maiores que a media\n",media,mmedia); break;
		case 3 : printf("%d elementos sao pares \n%d elementos sao impares\n",pares,impares); break;
		case 4 : printf("%d elementos sao negativos \n%d Elementos sao positivos",negativos,positivos); break;
		case 5 : for(i=20;i>=0;i--)
		{
			printf("%d  ",vetor[i]);
		} break;
		default : printf("Insira uma opcao valida!!!");
	}
}

