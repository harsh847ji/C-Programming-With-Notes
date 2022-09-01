#include <stdio.h>
int ten(int *i);
int main()

{
    int a = 5;
    printf("the value of a is %d\n", a);
    ten(&a);

    printf("the value of 10 times a is %d\n", a);

    return 0;
}
int ten(int *i)
{
   //(*i)*=(10);
   *i = *i*10;
    
}