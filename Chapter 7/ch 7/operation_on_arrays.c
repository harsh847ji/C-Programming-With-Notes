#include<stdio.h>

int main()

    {
    int a=78;
    int *b=&a;
    printf("the value of pointer is %d\n",b);
    b=b+5;
    printf("the value of pointer is %d\n",b);
    printf("\n");
    int p=78;
    int *q=&p;
    printf("the value of pointer is %d\n",q);
    q=q-5;
    printf("the value of pointer is %d\n",q);
    printf("\n");
    int x=78,g;
    int *y=&x;
    int c=99;
    int *d=&c;
    int e=55;
    int *j=&e;
    printf("the value of pointer y is %d\n",y);
    printf("the value of pointer d is %d\n",d);
    printf("the value of pointer j is %d\n",j);
    g=j-y;
    printf("the value of pointer y-j is %d\n",g);
    return 0;
}