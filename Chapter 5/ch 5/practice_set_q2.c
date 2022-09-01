#include <stdio.h>
float fahrenheit(float a);
int main()

{
    float b;
    printf("enter the temprature in celsius\n");

    scanf("%f", &b);

    printf("the themprature in fahrenheit is %f\n", fahrenheit(b));

    return 0;
}

float fahrenheit(float a)
{
    float result;
    result = (a * 9) / 5 + 32;
    return result;
}