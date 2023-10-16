#import <stdio.h>
#import <string.h>
main()
{
	char nome[100];
	int a,letras;
	puts("Insira um nome"); gets(nome);
	letras=strlen(nome);
	for(a=0;a<letras;a++)
		if(a%2!=0)
			nome[a]=' ';
	puts(nome);
}
