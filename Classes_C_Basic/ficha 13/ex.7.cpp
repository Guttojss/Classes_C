#import <stdio.h>
#import <string.h>
main()
{
	char a[100];
	printf("Insira uma frase \n");
	gets(a);
	printf("%s\n",strrev(a));
}
