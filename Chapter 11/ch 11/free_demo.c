#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr2=(int*)calloc(60000000,sizeof(int));
        printf("enter the marks of %d student\n",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    printf("\nthe marks are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    

    return 0;
}