#import <stdio.h>
main()
{
// Declarar as Variaveis
int op,soma,multi,sub,num1,num2; /*Op�ao (op),Soma,Multiplica�ao(multi),Subtra�ao(sub)*/
float div; /*Divisao(div)*/
//	Introdu�ao
printf("Bem Vindo a TFG-Calc\n");
printf("Este programa � apenas uma calculadora muito simples\n");
printf("Ela pode fazer : somas , subtra�oes , divisoes e multiplica�oes\n");
printf("\n");printf("\n");printf("\n");
//		Menu de op�oes
printf("Que opera�ao deseja efetuar?\n");
printf("Soma (1), Subtra�ao(2), Multiplica�ao(3), Divisao(4)\n");scanf("%d",&op);
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
//            Subtra�ao
case 2 :
	printf("Insira os numeros que deseja subtrair : \n");
	printf("Insira o primeiro numero : \n");scanf("%d",&num1);
	printf("Insira o segundo numero : \n");scanf("%d",&num2);
	sub = num1-num2;
	printf("O resultado de %d e %d e de %d \n",num1,num2,sub);
	break;
//									Multiplica�ao
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
default : printf("Por favor insira uma op�ao valida\n");
}
}
