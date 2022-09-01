#include<stdio.h>
void starpatern(int rows);
int main()

    {
        int rows;
    printf("how many rows do you want?\n");
    scanf("%d",&rows);
    starpatern(rows);
    return 0;
}
void starpatern(int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
    }
    

}