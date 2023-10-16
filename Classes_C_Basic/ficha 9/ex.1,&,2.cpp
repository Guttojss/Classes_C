#import <stdio.h>


	void ex2(int n1,int n2)
	{
		int num3;
		if (n1<n2)
		{
			num3=n2;
		}
		else
			num3=n1;
	
		printf("O maior numero dentro dos 2 numeros inseridos e : %d \n",num3);
	}
	
	main()
	{
		int n1,n2;
	
		printf("Insira 2 numeros \n");
		printf("Insira o 1º numero : \n");scanf("%d",&n1);
		printf("Insira o 2º numero \n");scanf("%d",&n2);
	
		ex2(n1,n2);
	}

