#include <stdio.h>

int main()

{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the marks of student no %d \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the value of marks of student no.%d is %d \n", i + 1, marks[i]);
    }

    return 0;
}