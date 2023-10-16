#import <stdio.h>
#import <string.h>
main()
{
	char nome[100];
	int letras,a;
	puts("Insira um nome : "); gets(nome);
	letras=strlen(nome);
	
	for(a=0;a!=letras;a++)
		puts(nome);
}
