#include<stdio.h>

int main()

    {
    int a,b;
    printf("enter the no\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even\n", a);
    }
    else{
        printf("the no is odd\n");
    }
    return 0;
}