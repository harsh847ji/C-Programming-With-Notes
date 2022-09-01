#include <stdio.h>

int main()

{
    int i = 34;
    int *ptr = &i;
    printf("the value of ptr is %u\n", ptr);
    ptr = ptr + 1;
    printf("the value of ptr is %u\n", ptr);
    printf("\n");
    char c = 34;
    char *point = &c;
    printf("the value of point is %u\n", point);
    point = point + 1;
    printf("the value of point is %u\n", point);

    return 0;
}