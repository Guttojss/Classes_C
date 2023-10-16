#import <stdio.h> 
#import <string.h>
main()
{
	char nome[100];
	int letras;
	puts("Escreva o seu nome : ");
	gets(nome);
	letras = strlen(nome);
	printf("Olá %s , o seu nome tem %d letras",nome,letras);
}
