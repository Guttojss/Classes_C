#import <stdio.h>
#import <string.h>
//funcao criptografia
	char criptografia(char frase[100],int dim)
	{
		for(int a=0;a!=dim;a++)
		{
			frase[a]=frase[a]+1;
				if(frase[a]=='z')
					frase[a]='a';
				if(frase [a]=='Z')
					frase[a]='A';
		}
	puts(frase);
	}

	//funcao traduzir
	char traduzir(char frase[100],int dim)
	{
		for(int a=0;a!=dim;a++)
			{
				frase[a]=frase[a]-1;
					if(frase[a]=='Z')
						frase[a]='A';
					if(frase[a]=='z')
						frase[a]='a';
			}
		puts(frase);
		}
	
	
	//main
	main()
	{
	char frase[100];
	int op,dim,a;

	puts("Insira uma frase");gets(frase);dim=strlen(frase);
	printf("Bem-Vindo,  deseja criptografar (1) ou traduzir(2)?\n");scanf("%d",&op);

	if(op==1)
		criptografia(frase,dim);
	if(op==2)
		traduzir(frase,dim);
	}
