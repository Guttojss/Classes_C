#import <stdio.h>
main()
{
	int vetor[10],num,soma=0,total,impares,i,contar;
	
	for(i=0;i!=10;i++)
		{
			printf("\nDigite 1 numero : ");scanf("%d",&num);
			total++;
			if(num%2==0)
				soma=soma+num;
			else
				contar++;
		}
	printf("\nEscreveu %d impares , a soma de todos os pares é : %d\n",contar,soma);
}
