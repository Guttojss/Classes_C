#import <stdio.h>
main()
{
	int vetora[10]={2,4,6,8,10,12,14,16,18,20},vetorb[10]={10,11,12,13,14,15,16,17,18,19},vetorc[10],a;
	
	for(a=0;a!=10;a++)
		vetorc[a]=vetora[a]+vetorb[a];
	
	printf("Vetor a : \n");
	for(a=0;a!=10;a++)
		printf("%d\n",vetora[a]);
	
	printf("Vetor b : \n");
	for(a=0;a!=10;a++)
		printf("%d\n",vetorb[a]);
	
	printf("Vetor c : \n");
	for(a=0;a!=10;a++)
		printf("%d\n",vetorc[a]);
}
