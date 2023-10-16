#import <stdio.h>
	soma(int n1, int n2)
	{
		int soma;
		soma = n1+n2;
		printf("%d + %d = %d",n1,n2,soma);
	}

	diferenca(int n1, int n2)
	{
		int dif;
		dif = n1 - n2;
		printf("%d - %d = %d",n1,n2,dif);
	}

	produto(int n1, int n2)
	{
		int vezes;
		vezes=n1*n2;
		printf("%d x %d = %d",n1,n2,vezes);
	}	

	quociente(float n1, float n2)
	{
		float div;
		div = n1/n2;
		printf("%d : %d = %d",n1,n2,div);
	}

main()
{
	int n1,n2,op;

	printf("Escreva 2 numeros \n");
	printf("Escreva o 1º numero : ");scanf("%d",&n1);
	printf("\n Escreva o 2º numero : ");scanf("%d",&n2);
	printf("\n Qual Operaçao deseja realiazar?\n");
	printf("Soma (1) , Diferenca(2) , Produto(3) , Quociente(4)\n"); scanf("%d",&op);

	switch (op)
	{
		case 1 : soma(n1,n2); break;
		case 2 : diferenca(n1,n2); break;
		case 3 : produto(n1,n2); break;
		case 4 : quociente(n1,n2); break;
	}
}
