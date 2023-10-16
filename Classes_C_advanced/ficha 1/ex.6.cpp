#import <stdio.h>
#import <string.h>
main()
{
	char nome[100],apelido[100],caps[100];
	puts("Insira seu nome : ");gets(nome);
	puts("Insira seu apelido : ");gets(apelido);
	strcat(caps,nome);strcat(caps,apelido);
	printf("O seu nome completo e em maisculas e : %s",strupr(caps));
}
