#include<stdio.h>

int main()

    {
    int a,num,sum=0,i=0;
    printf("enter the no you want multiplication table of\n");
    scanf("%d",&a);
    printf("the multiplication table of %d is\n",a);
    while(i<11){
        num=a*i;
        i++;
        sum=sum+num;
    }
    // for (int i = 0; i <11; i++)
    // {
    //     num=a*i;
    //     sum+=num;
    // }
    printf("the sum of all the numbers of the table is %d",sum);
    return 0;
}