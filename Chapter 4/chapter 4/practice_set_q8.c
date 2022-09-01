#include<stdio.h>

int main()

    {
    int a,i,num,mul=1;
    printf("\nenter the no \n");
    scanf("%d",&a);
    printf("the the factorial of %d is\n",a);
    for (i=0;i<a;i++){
        num=a-i;
        printf("%d\n",num);
        mul=mul*num;
    }
    printf("%d\n",mul);
    return 0;
}