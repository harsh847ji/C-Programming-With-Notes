#include <stdio.h>
int main()
{
    int a;
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    printf("enter a no\n");
    scanf("%d", &a);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "%dX%d=%d\n", a, i, a * i);
    }
    fclose(ptr);
    return 0;
}