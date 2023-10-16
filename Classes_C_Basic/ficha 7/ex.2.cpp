#include <stdio.h>
main()
{
int num;

	printf("Insira um numero :\n");scanf("%d",&num);

	do
	{

	if(num%3!= 0)
		printf("%d\n",num);
	printf("\n");
	num = num+1;
	}
	while(num%10!=0);
}
