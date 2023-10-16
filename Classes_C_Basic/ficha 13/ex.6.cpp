#import <stdio.h>
#import <string.h>
main()
{
	char frase[100],a;
	int dim;
	printf("Insira uma frase : \n");
	gets(frase);
	dim = strlen(frase);
	for(a=0;a<dim;a++)
		if (frase[a] == ' ')
			frase[a]='\n';
	printf("%s",frase);
}
