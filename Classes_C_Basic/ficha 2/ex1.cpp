#include  <stdio.h>
main()
{
	int X,Y,soma,produto,resto,divi,sub;

	printf("Insira Um Numero \n");
	scanf("%d",&X);

	printf("Insira outro Numero \n");
	scanf("%d",&Y);

	soma = X+Y;
	sub = X-Y;
	produto = X*Y;
	divi = X/Y;
	resto = X%Y;

	printf("A soma dos dois numeros e : %d \n", soma );
	printf("A Subtraçao dos dois numeros e : %d\n",sub );
	printf("O Produto dos dois numeros e : %d\n ",produto );
	printf("A Divisao dos dois numeros e : %d\n",divi );
	printf("O Resto dos dois numeros e : %d\n",resto );
}
