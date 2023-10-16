#import <stdio.h>
main()
{
	int ld1,ld2,ld3,lda,ld_12,ld_13,ld_23;

	printf("Insira os lados de um triangulo : \n");
	printf("Insira o 1º. lado : \n"); scanf("%d",&ld1);
	printf("Insira o 2º. lado : \n"); scanf("%d",&ld2);
	printf("Insira o 3º. lado : \n"); scanf("%d",&ld3);

	lda = ld1*ld2*ld3;
	ld_12 = ld1+ld2;
	ld_13 = ld1+ld3;
	ld_23 = ld2 + ld3;

	if (lda = 0 || ld_12 < ld3 || ld_13 < ld2 || ld_23 < ld1)
		printf("Isto nao e um triangulo , porfavor tente novamente");
	else
		if	(ld1 == ld2 || ld1 == ld3 || ld2 == ld3)
			printf("O Triangulo e equilatero");
		else
			if (ld1 != ld2 || ld1 != ld3 || ld2 != ld3)
				printf("O triangulo e escaleno");
			else
				printf("O triangulo e isosceles");
}

