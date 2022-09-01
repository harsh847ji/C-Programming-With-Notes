#include<stdio.h>

int main()

    {
    float income;
    float twenty;
    printf("enter your income\n");
    scanf("%d",&income);
    twenty=0.5*income;
    if(income<250001){
        printf("your income tax is 0");
    }
    else if(250000<income<500000){
        printf("your income tax is 5%%\n");
        printf("you have to pay rs%f as tax\n", twenty);
    }
    return 0;
}