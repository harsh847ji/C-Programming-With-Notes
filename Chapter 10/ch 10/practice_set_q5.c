#include <stdio.h>
int main()
{
     FILE *ptr;
     ptr=fopen("set5.txt","r");
     int a;
    fscanf(ptr,"%d",&a);
    FILE *ptr1;
    ptr1=fopen("set5ans.txt","w");
    fprintf(ptr1,"%d",a*2);
    fclose(ptr);
    fclose(ptr1);
    return 0;
}