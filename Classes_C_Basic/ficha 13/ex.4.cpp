#import <stdio.h> 
#import <string.h> 
main()
{
	char frase[100],a;
	int dim;
	printf("Escreva uma frase : \n");
	gets(frase);
	dim = strlen(frase);
	for(a=0;a<dim;a++)
		if(frase[a]=='A' ||frase[a]=='E'||frase[a]=='I'||frase[a]=='O'||frase[a]=='U')
			frase[a]='*';
	printf("%s",frase);
}
