//exercicio extra 4 (9/12/22) ficha 9
#import <stdio.h>
main()
{
	int n1,n2,n3,soma;

	printf("Insira 2 numeros\n");
	printf("1 numero :");scanf("%d",&n1);
	printf("\n2 numero : ");scanf("%d",&n2);
//ordem crescente
	if (n1>n2) 
	{
		n3=n1;
		n1=n2;
		n2=n3;
	}

	do
	{
	n1=n1+1;
	if (n1%2!=0)
		soma = soma +n1;
	else
		printf("%d \n",n1);

	}	
	while (n1!=n2);
	printf("A soma dos impares e %d",soma);
}
