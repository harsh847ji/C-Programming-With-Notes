#include <stdio.h>

int main()

{
    int i, a = 1;
    printf("enter the no to till which you want to write natural no\n");
    scanf(" %d", &i);
    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= i);

    return 0;
}