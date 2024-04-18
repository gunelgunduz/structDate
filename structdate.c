#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct myDate{
     int day;
     int month;
     int year;
};

int main()
{
    struct myDate x;
    struct myDate y;

    printf("Enter your date of birth:");
    scanf("%d%d%d", &x.day, &x.month, &x.year);

    printf("Enter today's date:");
    scanf("%d%d%d", &y.day, &y.month, &y.year);
    
    if(x.day>y.day){
        y.day+=12;
        y.month-=1;
    }

    if(x.month>y.month){
        y.month+=12;
        y.year-=1;
    }

    printf("\n You have lived ");
    printf("%d day, %d month, %d year ", y.day-x.day, y.month-x.month, y.year-x.year);
    return 0;
}