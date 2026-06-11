#include<stdio.h>

enum daysOfWeek
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};

int main()
{
    enum daysOfWeek day1,day2;
    day1 = Sun;
    day2 = Wed;
    int dif = day2-day1;
    printf("day difference = %d\n",dif);

    return 0;
}
