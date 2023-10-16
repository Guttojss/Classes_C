#import <stdio.h>

main()
{
	char totobola[13];
	int i;
	
	printf("Bem Vindo à totobola\n");
	printf("Escreva \n(1)se aposta na equipa da esquerda \n(x)se aposta em empate \n(2)se aposta na equipa da direita\n");
	
	for(i=0;i<13;i++)
		scanf("%c\n",&totobola[i]);
	
	printf("O totoloto inserido foi :\n");
	
	for(i=0; i<13; i++)
		printf("%c\n",totobola[i]);

}
