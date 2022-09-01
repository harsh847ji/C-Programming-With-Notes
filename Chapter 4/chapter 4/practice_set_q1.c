#include<stdio.h>

int main()

    {
    int a,i=0,num;
    printf("enter the no you want multiplication table of\n");
    scanf("%d",&a);
    printf("the multiplication table of %d is\n",a);
    do{
        i++;
        num=a*i;
        printf("%d X %d = %d\n",a,i,num);

    }while(num<a*10);
    return 0;
}