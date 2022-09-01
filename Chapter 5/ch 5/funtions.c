#include<stdio.h>
void display();//function prototype
int main()

    {
        int a;
        printf("\ninitializing display function\n");
        display();//funtion call
        printf("display function finished its work\n");

    return 0;
}
//function defination
void display(){
    printf("this is display\n");
}