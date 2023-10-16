#import <stdio.h>
main()
{
	int idade[8],i,soma;
	float media;

	//idades de uma turma com 8 alunos e calcule a média

	for(i=0;i<8;i++)
	{
		printf("Digite a sua idade : ");scanf("%d",&idade[i]);
		soma = soma +idade[i];
	}
	media=soma/8;
	printf("\nA media das idades inseridas é : %.2f",media);
}
