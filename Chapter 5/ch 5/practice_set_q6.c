#include<stdio.h>
int sum(int a);
int main()

    {
    int a;
    scanf("%d",&a);
    printf("the sum is %d",sum(a));
    return 0;
}
int sum(int a){

   if (a==1)
   {
       return 1;
   }
   else{
       return a+sum(a-1);
   }
}