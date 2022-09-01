#include <stdio.h>
#include <string.h>
typedef struct timestamp
{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
    char ampm[2];
} stamp;
void display(stamp ts1)
{
    printf("%d/%d/%d  %d-%d-%d-%s\n", ts1.date, ts1.month, ts1.year, ts1.hour, ts1.min, ts1.sec, ts1.ampm);
}
int stampComp(stamp ts1, stamp ts2)
{
    if (ts1.date > ts2.date)
    {
        return 1;
    }
    if (ts1.date < ts2.date)
    {
        return -1;
    }
    if (ts1.month > ts2.month)
    {
        return 1;
    }
    if (ts1.month < ts2.month)
    {
        return -1;
    }
    if (ts1.year > ts2.year)
    {
        return 1;
    }
    if (ts1.year < ts2.year)
    {
        return -1;
    }
    if (ts1.hour > ts2.hour)
    {
        return 1;
    }
    if (ts1.hour < ts2.hour)
    {
        return -1;
    }

    if (ts1.min > ts2.min)
    {
        return 1;
    }
    if (ts1.min < ts2.min)
    {
        return -1;
    }
    if (ts1.sec > ts2.sec)
    {
        return 1;
    }
    if (ts1.sec < ts2.sec)
    {
        return -1;
    }
    if (ts1.ampm == "pm" && ts2.ampm == "am")
    {
        return 1;
    }
    if (ts1.ampm == "am" && ts2.ampm == "pm")
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    stamp ts1 = {25, 5, 21, 15, 10, 1};
    strcpy(ts1.ampm,"am");
    stamp ts2 = {25, 5, 21, 15, 10, 1};
    strcpy(ts2.ampm,"pm"); 
    display(ts1);
    display(ts2);
    int a = stampComp(ts1, ts2);
    if (a == 1)
    {
        printf("stamp 1 is greater\n");
    }
    else if (a == -1)
    {
        printf("stamp 2 is greater\n");
    }
    else if (a == 0)
    {
        printf("both are equal\n");
    }

    return 0;
}