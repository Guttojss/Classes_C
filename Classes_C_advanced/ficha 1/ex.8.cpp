#import <stdio.h>
#import <string.h>
main()
{
	char frase[100];
	puts("Insira uma frase");gets(frase);
	int dim=strlen(frase);
	for(int a=0;a!=dim;a++)
		if(frase[a]=='a' || frase[a]=='A')
			frase[a]=' ';
		puts("A frase sem a letra 'a' é ");puts(frase);
}
