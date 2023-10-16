//Ficha 11 Exercicio 1 (só copiar)
#import <stdio.h>
#define  DIM 3

main()
{
	
	char galo[DIM][DIM]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int i,j;
	
	galo [0] [0] = 'X';
	galo [1] [1] = 'X';
	galo [2] [2] = 'X';
	galo [0] [1] = 'O';
	galo [0] [2] = 'O';
	
	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
			printf("%c %c",galo[i][j],j==DIM-1?' ':'! ');
		if (i!=DIM-1)
			printf("\n--------\n");
	}
}
