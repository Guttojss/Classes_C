#import <stdio.h>
main()
{
	float compra,lucro,final;
	printf("Insira o pre�o da compra : \n"); scanf("%f",&compra);
	if(compra <=20.00)
		lucro=compra*0.3;
	else
		lucro=compra*0.15;
	final=compra+lucro;
	printf("o pre�o final sera %.2f\n",final);
}
