#import <stdio.h>
#import <string.h>
typedef struct Aluno
{
	int matricula;
	char nome[100];
	int nota1,nota2;
} ALUNO;

main()
{
	int quant_alunos=3;
	ALUNO alunos[3];
	for (int i=0;i!=quant_alunos;i++)
	{
		puts("Insira o Nome,matricula e notas : ");
		scanf("%s",&alunos[i].nome);
		scanf("%d",&alunos[i].matricula);
		scanf("%d",&alunos[i].nota1);
		scanf("%d",&alunos[i].nota2);
	}
	for (int i=0;i!=quant_alunos;i++)
	{
		printf("Matricula : %d\n",alunos[i].matricula);
		printf("Nome : %s\n",alunos[i].nome);
		float soma = alunos[i].nota1 + alunos[i].nota2;
		float media = soma/2;
		printf("Média das notas : %.2f\n",media);
		puts("\n");
	}
}
