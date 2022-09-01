#include <stdio.h>
float average(float a, float b, float c);
int main()

{
    float x, y, z;
    printf("enter 3 no you want average of\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    printf("the average is %f\n", average(x, y, z));

    return 0;
}
float average(float a, float b, float c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}