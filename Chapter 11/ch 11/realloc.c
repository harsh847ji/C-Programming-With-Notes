#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the marks of %d student\n",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\nthe marks are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    ptr=realloc(ptr,sizeof(int));
    printf("enter the no: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the marks of %d student\n",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\nthe marks are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    

    return 0;
}