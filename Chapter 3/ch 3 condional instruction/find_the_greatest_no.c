#include <stdio.h>

int main()

{
    int num1, num2, num3, num4, g1, g2;
    printf("enter the first number\n");
    scanf("%d", &num1);
    printf("enter the second number\n");
    scanf("%d", &num2);
    printf("enter the third number\n");
    scanf("%d", &num3);
    printf("enter the fourth number\n");
    scanf("%d", &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("greatest no is %d", num1);
    }
    if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("greatest no is %d", num2);
    }
    if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        printf("greatest no is %d", num3);
    }
    if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        printf("greatest no is %d", num4);
    }

    return 0;
}