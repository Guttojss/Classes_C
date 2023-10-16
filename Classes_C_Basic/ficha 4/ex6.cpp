#import <stdio.h>
main()

{
	int ano,ano2,ano3;

	printf("Digite o ano atual\n"); scanf("%d",&ano);

	ano2 = ano%400; 
	ano3 = ano%4;

	if (ano2 == 0 || ano3 == 0 )
		printf("O ano e bissexto\n");
	else
		printf("E um ano normal\n");
}
