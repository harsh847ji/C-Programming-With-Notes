#include<stdio.h>
void printpatern(int n);
int main()

    {
        int n;
        scanf("%d",&n);
        printpatern(n);
    
    return 0;
}
void printpatern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    printpatern(n-1);
    for (int i = 0; i <(2*n-1) ; i++)
    {
        printf("*");
    }
    printf("\n");

}