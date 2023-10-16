//Convertor de graus
#include <stdio.h>
main()
{
float cel , far;
int op;

printf("Obrigado Por Usar o meu programa\n ");
printf("Programa feito por link.fly/guttojss\n");
printf("\n");

printf("Bem-Vindo ao convertor de graus (ºF para ºC)\n");
printf("Use (1) para converter ºF para ºC e (2) para o contrario\n"); scanf("%d",&op);

if (op == 1){
printf("Quantos ºF estao?\n"); scanf("%f",&far);
	cel = (far-32) / 1.8;
	printf("Estao %.2f Graus ºF e convertido para ºC sao %.2f \n",far,cel);}
else
	if (op == 2){
		printf("Quantos ºC estao?\n"); scanf("%f",&cel);
		far = cel * 1.8 + 32;
		printf("Estao %.2f Graus ºC e convertido para ºF sao %.2f \n",cel,far);}
	else 
		printf("Por Favor digite uma opçao valida");
}
