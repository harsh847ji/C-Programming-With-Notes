#include<stdio.h>

int main()

    {
    int a;
    printf("enter the no to till which you want to write natural no\n");
    scanf("%d",&a);
    printf("natural no from 1 to %d are\n",a);
    for(int i=1;i<=a;i++){
        printf("%d\n",i);
    }
    return 0;
}