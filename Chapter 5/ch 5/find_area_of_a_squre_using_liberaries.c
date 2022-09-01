#include <stdio.h>
int area(int a);

int main()

{
    int c, d;
    printf("enter the side of square\n");
    scanf("%d", &c);
    d = area(c);
    printf("the area of square is %d", d);

    return 0;
}
int area(int a)
{
    int result;
    result = a * a;
}