#include <stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a=34;
    char b='g';
    float d=2.458;
    struct employee e1;
    e1.code=100;
    strcpy(e1.name,"harsh");
    e1.salary=456.45;

    printf("%s\n",e1.name);
    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);


    return 0;
}