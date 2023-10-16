// areas e Perimetros de quadrados e triangulos

#include <stdio.h>
main()
{
int a0,area,ld1,ld2,base,altura,perimetro,lds,ap;
printf("Obrigado Por Usar o meu programa\n ");
printf("Programa feito por link.fly/guttojss\n");
printf("\n");
printf("Bem Vindo a Calculadora de Areas e Perimetros \n");
printf("Que tipo de areas pretende calcular?\n");
printf("Quadrados (1) , Triangulos (2) ou Retangulos (3) , Polignos Regulares (4) ?\n"); scanf("%d",&a0);

switch(a0)
{
case 1 :
		printf("Insira O lado do quadrado\n");
		printf("Insira o lado : \n"); scanf("%d",&ld1);
		area = ld1*ld1;
		perimetro = ld1*4;
		printf("A area do quadrado e : %d \n e o Perimetro e : %d\n",area,perimetro);
		break;
case 2 :
		printf("Insira Os Dados do trianglo\n");
		printf("Insira a base do triangulo\n"); scanf("%d",&base);
		printf("Insira 2 lado do triangulo\n"); scanf("%d",&ld2);
		printf("Insira 3 lado do triangulo\n"); scanf("%d",&ld1);
		printf("Insira a altura do triangulo\n"); scanf("%d",&altura);
		area = base*altura/2;
		perimetro = ld1+ld2+base;
		printf("A area do Triangulo e : %d\ne o Perimetro e %d \n",area,perimetro);
		break;
case 3 :
		printf("Insira Os lados do Retangulo\n");
		printf("Insira o primeiro lado : \n"); scanf("%d",&ld1);
		printf("Insira o segundo lado : \n"); scanf("%d",&ld2);
		area = ld1*ld2;
		perimetro = ld1*2 + ld2*2;
		printf("A area do Retangulo e : %d \n e o Perimetro e : %d \n",area,perimetro);
		break;
case 4 :
		printf("Insira os dados do Poligno Regular\n");
		printf("Quantos lados tem o poligno regular?\n"); scanf("%d",&lds);
		printf("Qual o valor de um dos lados? \n"); scanf("%d",&ld1);
		printf("Qual o valor da apotema ?\n");scanf("%d",&ap);
		perimetro = lds*ld1;	area = perimetro / 2 * ap;
		printf("A area do poligno e : %d\n e o perimetro e : %d\n",area,perimetro);
		break;

default :("Por favor insira uma opçao valida");
}
}
