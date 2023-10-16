#import <stdio.h>
main()
{
	int num;
	printf("Insira um numero \n"); scanf("%d",&num);
	if(num%2==0)
		printf("é divisivel por 2\n");
	if(num%5==0)
		printf("é divisivel por 5\n");
	if(num%10==0)
		printf("é divisivel por 10\n");
	if(num%2!=0 && num%5!=0 && num%10!=0)
	printf("Nao é divisivel por 2 , 5 e 10\n");
}

