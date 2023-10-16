#import <stdio.h>
main()
{
	float irs,ss,sb,sq;

	printf("Insira o seu Salario Bruto : \n");scanf("%f",&sb);
	irs = sb * 0.15;
	ss = sb *  0.12;
	sq= sb - irs - ss;
	printf("O seu salario bruto e : %.2f\nO seu salario liquido e : %.2f\n",sb,sq);
	printf("A taxa de IRS e : %.2f\nA taxa de segurança social e : %.2f\n",irs,ss);
}
