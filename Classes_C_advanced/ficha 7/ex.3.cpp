#import <stdio.h>
#import <string.h>
typedef struct Produto
{
	char nome[100];
	int preco,codigo;
} PRODUTO;

main()
{
	int quant_prod=5,codigo2;
	PRODUTO produtos[5];

	for(int i=0;i!=quant_prod;i++)
	{
		puts("Insira o Codigo,Nome,Preço :");
		scanf("%d",&produtos[i].codigo);
		scanf("%s",&produtos[i].nome);
		scanf("%d",&produtos[i].preco);
	}
	for(int i=0;i!=quant_prod;i++)
	{
		printf("Codigo : %d\n",produtos[i].codigo);
		printf("Nome : %s\n",produtos[i].nome);
	}

	puts("Insira o codigo :");scanf("%d",&codigo2);

	for(int i=0;i!=quant_prod;i++)
	{
		if(produtos[i].codigo == codigo2)
		printf("Preço : %d\n",produtos[i].preco);
	}
}
