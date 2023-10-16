#import <stdio.h>
#import <string.h>
main()
{
	char nome[100];
	int a,dim;
	puts("Insira um nome : "); gets(nome);
	dim = strlen(nome);
	for(a=0;a<dim;a++)
		if(a%2!=0)
			nome[a]=' ';
	puts(nome);
}

