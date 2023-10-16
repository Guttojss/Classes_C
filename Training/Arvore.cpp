#import <stdio.h>

int main()
{
    int lines;
    printf("Quantas linhas quer? ");scanf("%d", &lines);
    printf("\n");

    for (int r = 1; r <= lines; r++) {
        for (int space = 1; space <= lines - r; space++) 
            printf(" ");
        for (int l = 1; l <= r; l++) 
            printf("%d", l);        
        for (int l = r - 1; l >= 1; l--) 
            printf("%d", l);       
        for (int space = 1; space <= lines - r; space++) 
            printf(" ");        
        printf("\n");
    }
}
