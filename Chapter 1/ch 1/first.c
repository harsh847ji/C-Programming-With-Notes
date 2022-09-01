#include <stdio.h>

int main()
{
    int _t_om; //_t_om is a variable
    // 'd' --> a character
    int a = 4, b = 8, e = 4+8 ;
    float d = 5.6;
    char c = 'A';
    int i , z ;
    printf("hello world \n");
    printf("the value of a is %d and value of b is %f and value of c is %c\n", a, d, c);
    printf("the value of a+b is %d\n", a + b);
    printf("the value of e is %d\n",e);
    printf("type the no you want to add\n");
    scanf("%d", &i );
    printf("type other no you want to add\n");
    scanf("%d" , &z );
    printf("the value of i+z is %d\n",i+z );
    return 0 ;
}