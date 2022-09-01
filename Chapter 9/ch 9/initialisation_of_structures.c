#include <stdio.h>
#include <string.h>
#include <conio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee harsh={100,23.4,"harsh"};
    printf("code is %d\n",harsh.code);
    printf("salary is %f\n",harsh.salary);
    printf("name is %s\n",harsh.name);

    return 0;
}