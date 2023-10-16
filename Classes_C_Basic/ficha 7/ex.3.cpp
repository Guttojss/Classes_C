//Ex 3
#include <stdio.h>
main()
{
	int i,j,n;
	printf("Insira o numero : \n"); scanf("%d",&n);

	for(i=1;i<=n;i=i+1)
	{
		for(j=1;j<=i;j=j+1)
			printf("%c",'*');
	printf("\n");
	}
}
