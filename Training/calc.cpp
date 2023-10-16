#import <stdio.h>
main()
{
// Declarar as Variaveis
int op,soma,multi,sub,num1,num2; /*Opçao (op),Soma,Multiplicaçao(multi),Subtraçao(sub)*/
float div; /*Divisao(div)*/
//	Introduçao
printf("Bem Vindo a TFG-Calc\n");
printf("Este programa é apenas uma calculadora muito simples\n");
printf("Ela pode fazer : somas , subtraçoes , divisoes e multiplicaçoes\n");
printf("\n");printf("\n");printf("\n");
//		Menu de opçoes
printf("Que operaçao deseja efetuar?\n");
printf("Soma (1), Subtraçao(2), Multiplicaçao(3), Divisao(4)\n");scanf("%d",&op);
//         Escolhas
switch(op)
{
//       Soma
case 1 :
	printf("Insira os numeros que deseja somar : \n");
	printf("Insira o primeiro numero : \n");scanf("%d",&num1);
	printf("Insira o segundo numero : \n");scanf("%d",&num2);
	soma = num1+num2;
	printf("O resultado de %d e %d e de %d \n",num1,num2,soma);
	break;
//            Subtraçao
case 2 :
	printf("Insira os numeros que deseja subtrair : \n");
	printf("Insira o primeiro numero : \n");scanf("%d",&num1);
	printf("Insira o segundo numero : \n");scanf("%d",&num2);
	sub = num1-num2;
	printf("O resultado de %d e %d e de %d \n",num1,num2,sub);
	break;
//									Multiplicaçao
case 3 :
	printf("Insira os numeros que deseja multiplicar : \n");
	printf("Insira o primeiro numero : \n");scanf("%d",&num1);
	printf("Insira o segundo numero : \n");scanf("%d",&num2);
	multi = num1*num2;
	printf("O resultado de %d e %d e de %d \n",num1,num2,multi);
	break;
//							Divisao
case 4 :
	printf("Insira os numeros que deseja dividir : \n");
	printf("Insira o primeiro numero : \n");scanf("%d",&num1);
	printf("Insira o segundo numero : \n");scanf("%d",&num2);
	div = num1/num2;
	printf("O resultado de %d e %d e de %.2f \n",num1,num2,div);
	break;
// 					Mensagem de erro
default : printf("Por favor insira uma opçao valida\n");
}
}
