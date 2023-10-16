#import <stdio.h>
#import <string.h>
main()
{
	char nome[100],i,conta,conte,conti,conto,contu,dim;
	puts("Escreva o seu nome : ");
	gets(nome);dim=strlen(nome);
	for(i=0;i<dim;i++)
	{
		if (nome[i] == 'A'||nome[i] == 'a')
			conta++;
		if(nome[i] == 'E'||nome[i] == 'e')
			conte++;
		if(nome[i] == 'I'||nome[i] == 'i')
			conti++;
		if(nome[i] == 'O'||nome[i] == 'o')
			conto++;
		if(nome[i] == 'U'||nome[i] == 'u')
			contu++;
	}
	printf("O nome %s tem as seguintes vogais\nA = %d\n E = %d\n I = %d\n O = %d\n U = %d",nome,conta,conte,conti,conto,contu);
}
