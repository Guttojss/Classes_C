#include <stdio.h>

main()
{ 
   	float a[10];
    int i , n=10;
    
   	for (i=0; i<10 ; i++)
   	{
   		a[i]= i*(n-1);
		printf(" o resultado e :%.1f\n", a[i]);
	}
	
}
