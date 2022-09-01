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
    for (int i = rows ; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
    }
    

}