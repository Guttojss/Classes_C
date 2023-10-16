#import <stdio.h>
float media(float a,float b,float c)
{
	float media=(a+b+c)/3;
	return media;
}

main()
{
	float a,b,c;
	do
	{
		printf("Escreva a nota das 3 disciplinas : \n");
		scanf("%f %f %f",&a,&b,&c);
		printf("A media é %.2f \n",media(a,b,c));
	}
	while(a!=0);
}
