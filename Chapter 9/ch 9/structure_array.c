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
    struct employee facebook[10];

    for (int i = 0; i < 3; i++)
    {
        printf("enter the code of employee %d:-\n", i + 1);
        scanf("%d", &facebook[i].code);
        printf("enter the salary of employee %d:-\n", i + 1);
        scanf("%f", &facebook[i].salary);
        printf("enter the name of employee %d:-\n", i + 1);
        scanf("%s", facebook[i].name);
        printf("\n\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the code of employee %d:-\n", i + 1);
        printf("%d\n", facebook[i].code);
        printf("the salary of employee %d:-\n", i + 1);
        printf("%f\n", facebook[i].salary);
        printf("the name of employee %d:-\n", i + 1);
        printf("%s\n", facebook[i].name);
        printf("\n\n");
    }

    getch();
    return 0;
}