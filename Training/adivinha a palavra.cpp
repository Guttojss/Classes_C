//Adivinha a palavra
//Preciso de uma lista de palavras. usar um vetor , para escolher usar um nmr random.
//Preciso de uma forma de deformar a palavra.
#import <stdio.h>
#import <time.h>
#import <stdlib.h>
#import <strings.h>
main()
{
int vidas=3,nmr;
char resposta[20];
//CRIA�AO DA LISTA
char lista[]= {"palavra"};

//        Explica�ao
printf("Bem vindo ao Adivinha � palavra.\n");
printf("Ir� aparecer uma palavra com as letras no lugar errado e voce tera 3 tentativas para adivinhar.\n");
printf("O jogo ir� come�ar :\n");
//       Verefica a resposta e faz perder vida.
srand(time(NULL));
	nmr= rand() % 0 + 1;
for(int i=0;i!=vidas;i++)
{
	printf("%s",lista[nmr]);
	scanf("%s",&resposta[0]);
	if(resposta[0]!=lista[nmr])
		printf("Errou!!! perdeu uma vida tem ainda %d vidas restantes",vidas-i);
}
}
