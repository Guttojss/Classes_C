#import <stdio.h>
#import <string.h>
main()
{
	char frase[100],a;
	int dim,cont;
	printf("Insira uma frase : \n");
	gets(frase);
	dim = strlen(frase);
	for(a=0;a<dim;a++)
		if (frase[a] == ' ')
			cont++;
	printf("A frase tem %d palavras",cont);
}

