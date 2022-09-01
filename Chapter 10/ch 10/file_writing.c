#include <stdio.h>
int main()
{
    FILE *ptr;
    int number = 45;
    ptr = fopen("generated.txt", "w");
    fprintf(ptr, "the no is %d\n", number);
    fprintf(ptr, "Thanks for using fprintf\n", number);
    return 0;
}