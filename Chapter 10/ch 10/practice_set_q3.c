#include <stdio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("a.txt","r");
    ptr2=fopen("b.txt","w");
    char c,g;
    c=fgetc(ptr1);
    c=g;
    while (c!=EOF)
        {
            fputc(c,ptr2);
            c=fgetc(ptr1);
            c=g;
        }
    while (g!=EOF)
        {
            fputc(g,ptr2);
            g=fgetc(ptr1);
        }
    
    
    
    
    
    
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}