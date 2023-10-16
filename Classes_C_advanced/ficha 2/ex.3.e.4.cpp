#import <stdio.h>
int pot(int x,int n)
{
	int xf=1;
	for(int i=0;i!=n;i++)
	xf=xf*n;
	return xf;
}

main()
{
	int num,ele;
	printf("Escreva um numero : \n");scanf("%d",&num);
	printf("Escreva um numero para %d ser elevado \n",num);scanf("%d",&ele);
	printf("O Numero final irá ser : %d \n",pot(num,ele));
}
