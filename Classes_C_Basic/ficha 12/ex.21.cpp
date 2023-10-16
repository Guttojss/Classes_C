/*exercico 21*/
#import <stdio.h>
main()
{
	int matriz[5][5],i,j;
	for(i=0;i!=5;i++)
		for(j=0;j!=5;j++)
		{
			if(matriz[i]==matriz[j])
				matriz[i][j]=1;
			else
				matriz[i][j]=0;
		}
	for(i=0;i!=5;i++)
	{
		for(j=0;j!=5;j++)
		{
			printf("%d  ",matriz[i][j]);
		}
		printf("\n");
	}
}
