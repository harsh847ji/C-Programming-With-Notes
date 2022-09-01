#include<stdio.h>

int main()

    {
    // int a=10;
    // if(a=11){
    //     printf("i am 11");
    // }
    // else{
    //     printf("i am not 11");
    // }
    //question 2
    int english, hindi, maths;
    float total;
    printf("type the no of marks in english.\n");
    scanf("%d",&english);
    printf("type the no of marks in hindi.\n");
    scanf("%d",&hindi);
    printf("type the no of marks in math.\n");
    scanf("%d",&maths);
    total=(maths+english+hindi)/3;
    if (total<40 || english<33 || hindi<33 || maths<33)
    {
        printf("your total percentage is %f and you are fail",total);
    }
    else{
        printf("your total percentage is %f and you are pass",total);
    }
    
    
    return 0;
}