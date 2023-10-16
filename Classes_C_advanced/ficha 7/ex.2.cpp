#import <stdio.h>
typedef struct Pessoa
{
	char nome[100],genero[10];
	int altura,peso,NC;
} PESSOA;

main()
{
	int quant_pessoas=3,codigo;
	PESSOA pessoas[3];
	for(int i=0;i!=quant_pessoas;i++)
	{
		puts("Insira o Nome,NC,Altura,Peso e Genero : ");
		scanf("%s",&pessoas[i].nome);
		scanf("%d",&pessoas[i].NC);
		scanf("%d",&pessoas[i].altura);
		scanf("%d",&pessoas[i].peso);
		scanf("%s",&pessoas[i].genero);
	}

	puts("Insira o codigo :");scanf("%d",&codigo);

	for(int i=0;i!=quant_pessoas;i++)
		if(pessoas[i].NC == codigo)
			{
			printf("Nome : %s\n",pessoas[i].nome);
			printf("Genero : %s\n",pessoas[i].genero);
			float altura2 = pessoas[i].altura*pessoas[i].altura;
			float imc = pessoas[i].peso/altura2;
			printf("IMC : %d\n",imc);
			}
}
