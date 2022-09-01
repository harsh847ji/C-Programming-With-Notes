#include<stdio.h>

int main()

    {
    int a,i=11,num;
    printf("enter the no you want reverce multiplication table of\n");
    scanf("%d",&a);
    printf("the reverce multiplication table of %d is\n",a);
    do{
        i--;
        num=a*i;
        printf("%d X %d = %d\n",a,i,num);

    }while(i>1);
    return 0;
}