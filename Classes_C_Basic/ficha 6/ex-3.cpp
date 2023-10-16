#include <stdio.h>
main()
{
	int aux=0,inf,sup,soma,n;

	printf("Bem-Vindo ao sistema de numeros par!\n");
	printf("Insira  o limite inferior \n"); scanf("%d",&inf);
	printf("Insira o limite superior \n"); scanf("%d",&sup);
	printf("\n");
	if (inf > sup)
	{	
		aux = inf;
		inf = sup;
		sup = aux;
	}

	while(n <= sup)
	{
		if (n%2==0)
		{
			printf("%d\n",n);
			soma = soma+n;
		}
		n = n+1;
	}
	printf("A soma e : %d\n",soma);
}
