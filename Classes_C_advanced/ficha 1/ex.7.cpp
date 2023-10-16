#import <stdio.h>
#import <string.h>
main()
{
	char frase[100];
	puts("Insira uma frase");gets(frase);
	int dim=strlen(frase);
	for(int a;a!=dim;a++)
	{
		frase[a]=frase[a]+1;
		if(frase[a]=='z')
			frase[a]='a';
		if(frase [a]=='Z')
			frase[a]='A';
	}
	puts("A frase com a prox letra do alfabeto seria :");puts(frase);
}
