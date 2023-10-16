#import <stdio.h>
main()
{
	float altura,peso,imc; 
	printf("Bem vindo a calculadora  de IMC\n");
	printf("Insira a sua peso (em kilos)\n"); scanf("%f",&peso);
	printf("Insira a sua altura (em metros ponha '.' ex : 1.50)\n"); scanf("%f",&altura);

	imc = peso / (altura*altura);

	if (imc <= 18.5)
		printf("Esta Abaixo do peso normal\n");
	else
		if (imc > 18.5 && imc <= 24.9)
			printf("Esta no peso normal");
		else
			if (imc > 25 && imc <=29.9)
				printf("Esta em execesso de peso");
			else
				if (imc > 30 && imc <= 34.9)
					printf("Esta na obesidade classe I\n");
				else
					if (imc > 35 && imc <= 39.9)
						printf("Esta na obesidade class II\n");
					else
						printf("Esta na obesidade classe III\n");
}
