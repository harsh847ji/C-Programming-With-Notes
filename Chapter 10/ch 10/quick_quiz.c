#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("harsh34.txt", "r");
    if (ptr == NULL)
    {
        printf("the file doesnt exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("the no is %d\n", num);
        printf("the no2 is %d\n", num2);
    }
    return 0;
}