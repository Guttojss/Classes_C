/*
Despesas
200$ em despesas de familia (netflix,apple)
40$ da crunchyroll
100$ da forro (investimento)

Programa
calc salario anual , mensal , semanal
calc despesas anual,mensal,semanal
*/
#import <stdio.h>
#import <locale.h>
main()
{
setlocale(LC_ALL,"");
int op,op2;
float salario,despesas,s_semanal,s_mensal,s_anual,d_mensal,d_semanal,d_anual;
printf("Olá!\nPor Favor insira quando recebe o seu salario!\nSemanal(1), Mensal(2), Anual(3).\n");scanf("%d",&op);
printf("Qual é o seu salario?\n");scanf("%f",&salario);
printf("Quando sao as suas despesas?\nSemanal(1), Mensal(2), Anual(3).\n");scanf("%d",&op2);
printf("Qual o valor das suas despesas?\n");scanf("%f",&despesas);

switch (op)
{
	case 1: 
		 s_semanal = salario; /*Salario semanal*/
		 s_mensal = salario*4; /*Salario mensal*/
		 s_anual = s_mensal*12; /*Salario anual*/
	break;
	case 2: 
		 s_semanal = salario/4; /*Salario semanal*/
		 s_mensal = salario; /*Salario mensal*/
		 s_anual = salario*12; /*Salario anual*/
	break;
	case 3: 
		 s_semanal = salario/48; /*Salario semanal*/
		 s_mensal = salario/12; /*Salario mensal*/
		 s_anual = salario; /*Salario anual*/
	break;
}
switch (op2)
{
case 1: 
		 d_semanal = despesas; /*Despesas semanal*/
		 d_mensal = despesas*4; /*Despesas mensal*/
		 d_anual = d_mensal*12; /*Despesas anual*/
	break;
	case 2: 
		 d_semanal = despesas/4; /*Despesas semanal*/
		 d_mensal = despesas; /*Despesas mensal*/
		 d_anual = despesas*12; /*Despesas anual*/
	break;
	case 3: 
		 d_semanal = despesas/48; /*Despesas semanal*/
		 d_mensal = despesas/12; /*Despesas mensal*/
		 d_anual = despesas; /*Despesas anual*/
	break;
}
float ds_semanal = s_semanal-d_semanal;
float ds_mensal = s_mensal-d_mensal;
float ds_anual = s_anual-d_anual;

printf("O seu salario semanal é : %.2f\n",s_semanal);
printf("O seu salario mensal é : %.2f\n",s_mensal);
printf("O seu salario anual é : %.2f\n\n",s_anual);
printf("As suas despesas semanais sao : %.2f\n",d_semanal);
printf("As suas despesas mensais sao : %.2f\n",d_mensal);
printf("As suas despesas anuais sao : %.2f\n\n",d_anual);
printf("O seu lucro semanal é : %.2f\n",ds_semanal);
printf("O seu lucro mensal é : %.2f\n",ds_mensal);
printf("O seu lucro anual é : %.2f\n\n",ds_anual);
}
