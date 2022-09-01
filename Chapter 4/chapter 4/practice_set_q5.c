#include <stdio.h>

int main()

{
    int a = 0, i = 0;
    printf("the sum of first 10 natural no is\n");
    /*with while loop*/
    // while (a <= 10)
    // {
    //     i = i + a;
    //     a++;
    // }


    /*with do while loop*/
    // do
    // {
    //     i=i+a;
    //     a++;
    // } while (a<=10);

    /*with for loop*/
    for ( i; a<=10; a++)
    {
        i=i+a;
    }
    
    
    printf("%d", i);

    return 0;
}