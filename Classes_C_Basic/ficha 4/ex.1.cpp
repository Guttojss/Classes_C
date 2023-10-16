#import <stdio.h>
main()
{
	int num;

	printf("Escreva um numero\n"); scanf("%d",&num);

	if (num%2==0)
		printf("O Numero e par \n");
	else
		printf("O Numero e impar\n");
		
	if (num<0)
		printf("O numero e negativo");
	else
		if (num>0)	
			printf("O numero e positivo");
		else
	printf("O Numero e zero\n");
}

