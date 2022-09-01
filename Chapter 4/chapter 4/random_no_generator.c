#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

    {
    int num;
    srand(time(0));
    num = rand()%100 + 1;//generates random no between 1 and 100 
    printf("the no is %d\n",num);
    return 0;
}