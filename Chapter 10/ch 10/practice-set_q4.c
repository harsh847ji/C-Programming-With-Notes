#include <stdio.h>
struct emp
{
    char n[10];
    int a;
};

int main()
{
    int n;
    printf("enter no of employees\n");
    scanf("%d",&n);
    struct emp facebook[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the name and salary of employee no %d\n",i+1);
        scanf("%s%d",facebook[i].n,&facebook[i].a);
    }
    FILE *ptr;
    ptr=fopen("facebook.txt","w");
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr,"%s,%d\n",facebook[i].n,facebook[i].a);
    }
    
    fclose(ptr);
   

    return 0;
}