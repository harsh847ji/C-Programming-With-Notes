#include <stdio.h>
int sum(int a, int b);
int main()

{
    int c, x, y;
    printf("enter the no \n");
    scanf("%d", &x);
    printf("enter other no to add \n");
    scanf("%d", &y);
    c = sum(x, y);
    printf("the sum is %d\n", c);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}