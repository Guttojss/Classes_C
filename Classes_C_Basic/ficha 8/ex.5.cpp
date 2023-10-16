#import <stdio.h>
main()
{
	int quantidade;
	float total_venda,preco,comisao;

	printf("Insira o preço unitario do item\n"); scanf("%f",&preco);
	printf("Insira a quantidade vendida\n"); scanf("%d",&quantidade);
	total_venda = preco * quantidade;
	comisao = total_venda * 0.05;
	printf("O preço dos items vendidos e : %.2f\nForam vendidos %d items\n",preco,quantidade);
	printf("O ganho total foi : %2.f \nA comisao a receber e : %.2f\n",total_venda,comisao);
}


