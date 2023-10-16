#include <stdio.h>
main()
{
	int num1=1,cont=1;

	while (num1<=5)
	{
		cont=1;	
		while (cont<=10)
		{
			printf("%d X %d = %d \n",num1,cont,num1*cont);
			cont = cont+1;
		}	
		num1=num1+1;
		printf("\n");
	}
}
