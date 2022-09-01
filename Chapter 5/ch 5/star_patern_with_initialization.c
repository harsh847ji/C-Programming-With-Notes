#include<stdio.h>

int main()

    {
        int rows;
    printf("how many rows do you want?\n");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
    {
        printf("*");
    }
    
    printf("\n");
    }
    
    return 0;
}