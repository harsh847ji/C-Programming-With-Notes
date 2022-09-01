#include<stdio.h>

int main()

    {
        int a=9;
        int *j=&a;
        printf("address of a is %u\n",&a);
        printf("the value of a is %d\n",*j);
    
    return 0;
}