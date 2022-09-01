#include<stdio.h>

int main()

    {
    int a,prime;
    printf("enter the no you want to check is prime or not\n");
    scanf("%d",&a);
   
    for(int n=2;n<a;n++)
    {
        if (a%n==0)
        {
            prime=0;
             break;
        }
    }
    if (prime==0)
    {
        printf("it is not a prime no\n");
    }
    else{
        printf("it is a prime no\n");
    }
    return 0;
}