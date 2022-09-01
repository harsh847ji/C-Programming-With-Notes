#include <stdio.h>

int main()

{
    int age;
    int vippass;
    printf("type your age\n");
    scanf("%d", &age);
    if(age>=90 || age<18){
        printf("do you have a vip pass, type 1 for yes and 0 for no \n");
        scanf("%d",&vippass);
    }
    if (age >= 18 && age <= 90 || vippass==1)
    {
        printf("you can drive a car");
    }
    else
    {
        printf("you are not  ready to drive now");
    }
    return 0;
}