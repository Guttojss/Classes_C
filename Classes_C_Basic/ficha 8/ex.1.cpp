#import <stdio.h>
main()
{
int num;
float vezes,media,soma;

	do
	{
		printf("Insira um numero");scanf("%d",&num);
		if(num%3==0 && num!=0)
		{
			printf("%d\n",num);
			vezes=vezes+1;
			soma=soma+num;
		}
	}
	while(num!=0);
	media = soma/vezes;
	printf("A soma dos numeros e : %.2f",soma);
	printf("A media dos numero e : %.2f",media);
}
