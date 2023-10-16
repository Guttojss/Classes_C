// sistema de tabuadas
#include <stdio.h>
main()
{

int num1,num2,cont=1;

printf("Bem-Vindo ao sistema de Tabuadas\n");
printf("Insira  o numero que deseja saber a tabuada\n"); scanf("%d",&num1);
printf("Insira ate onde quer a tabuada\n"); scanf("%d",&num2);
while(cont<=num2)
{
printf("%d X %d = %d \n",num1,cont,num1*cont);
cont=cont+1;
}

}

