#include<stdio.h>
int factorial(int a);
int main()

    {
        int c,d;
        printf("enter the value \n");
        scanf("%d",&c);
        d=factorial(c);
        printf("the factorial of %d is %d",c,d);
    
    return 0;
}

int factorial(int a){
    if (a==1 || a==0 )
    {
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}