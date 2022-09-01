#include<stdio.h>
int swap(int *a,int *b);
void wrong_swap(int a,int b);
int main()

    {
        int x=3,y=4;
        printf("the value of x and y is %d and %d\n",x,y);
        wrong_swap(x,y);//call by value
        printf("the value of x and y is %d and %d\n",x,y);
        swap(&x,&y);//call by reference
        printf("the value of x and y is %d and %d\n",x,y);
    return 0;
}
void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}