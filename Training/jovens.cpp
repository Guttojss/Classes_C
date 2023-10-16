//Detector de jovens kkkkkkkk
#include <stdio.h>
main()
{

int idade,pessoas,soma;
float media;
printf("Obrigado Por Usar o meu programa\n ");
printf("Programa feito por link.fly/guttojss\n");
printf("\n");
printf("Digite sua idade : "); scanf("%d",&idade);

do
{
pessoas = pessoas + 1;
soma = soma + idade;

if (idade <= 12)
   printf("Voce e uma criança\n");
else
     if (idade >= 13 && idade <= 25)
        printf("Voce e um jovem \n");
     else
          if (idade >= 26 && idade <= 64) 
             printf("Voce e um adulto \n");
          else
             printf("Voce e um idoso \n");

printf("Digite sua idade : "); scanf("%d",&idade);
}
while(idade != 0);

media = soma / pessoas;

printf("A media das Idades inseridas é : %.2f ", media);
}
