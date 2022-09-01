#include<stdio.h>

int main()

    {
    int a;
    printf("\nenter the no from where you want to write natural no in reverse\n");
    scanf("%d",&a);
    printf("the reverse natural no from %d are\n",a);
    for (a;a;a--)
        printf("%d\n",a);
    return 0;
}