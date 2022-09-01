#include<stdio.h>
int address(int a);
int main()

    {
    int i;
    printf("the address of i is %u\n",&i);
    address(i);

    return 0;
}
int address(int a){
    printf("the address of i after using function is %u\n",&a);
}