#include <stdio.h>
struct date{
    int date;
    int month;
    int year;

};
void display(struct date d){
    printf("%d/%d/%d\n",d.date,d.month,d.year);
}
int dateCmp(struct date d1,struct date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    else {
        return 0;
    }
}
int main()
{
    struct date d1;
    scanf("%d%d%d",&d1.date,&d1.month,&d1.year);
    struct date d2;
    scanf("%d%d%d",&d2.date,&d2.month,&d2.year);
    display(d1);
    display(d2);
    int a=dateCmp(d1,d2);
    printf("date comparison function returns : %d",a);

    return 0;
}