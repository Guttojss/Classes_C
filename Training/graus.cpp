//Convertor de graus
#include <stdio.h>
main()
{
float cel , far;
int op;

printf("Obrigado Por Usar o meu programa\n ");
printf("Programa feito por link.fly/guttojss\n");
printf("\n");

printf("Bem-Vindo ao convertor de graus (�F para �C)\n");
printf("Use (1) para converter �F para �C e (2) para o contrario\n"); scanf("%d",&op);

if (op == 1){
printf("Quantos �F estao?\n"); scanf("%f",&far);
	cel = (far-32) / 1.8;
	printf("Estao %.2f Graus �F e convertido para �C sao %.2f \n",far,cel);}
else
	if (op == 2){
		printf("Quantos �C estao?\n"); scanf("%f",&cel);
		far = cel * 1.8 + 32;
		printf("Estao %.2f Graus �C e convertido para �F sao %.2f \n",cel,far);}
	else 
		printf("Por Favor digite uma op�ao valida");
}
