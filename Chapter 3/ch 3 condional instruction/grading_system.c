#include<stdio.h>

int main()

    {
    int marks;
    printf("type the marks obtain\n");
    scanf("%d",&marks);
    switch(marks/10){
        case 9:
        printf("the grade of student is A\n");
        break;
        case 8:
        printf("the grade of student is B\n");
        break;
        case 7:
        printf("the grade of student is C\n");
        break;
        case 6:
        printf("the grade of student is D\n");
        break;
        default :
            printf("fail\n");
        break;
        
    }
    return 0;
}