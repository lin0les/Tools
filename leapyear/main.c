#include <stdio.h>

int day_of_year(int year, int month, int day);
int month_day(int year, int yearday, int *pmonth, int *pday);
char *month_name(int n);

int main(int argc, char *argv[]){

    int yearday, year, month, day;
    year=1996;
    month=9;
    day=28;
    yearday=326;
    
    int ret;

    printf("Year = %d\n", year);
    printf("Month = %d\n", month);
    printf("Day = %d\n", day);

    ret=day_of_year(year, month, day);
    if(ret == -1)
        printf("Invalid year\n");
    else if(ret == -2)
        printf("Invalid month\n");
    else
        printf("Day of year => %d\n", ret);

    printf("\nYearday = %d\n", yearday);
    ret = month_day(year, yearday, &month, &day);
    if(ret == -1)
        printf("Invalid year\n");
    else if(ret == -2)
        printf("Invalid yearday\n");
    else
        printf("Day of year => month => %s(%d); day => %d\n", month_name(month), month, day);

    return 0;
}
