#include <stdio.h>

int day_of_year(int year, int month, int day);
int month_day(int year, int yearday, int *pmonth, int *pday);

int main(int argc, char *argv[]){

    int yearday, year, month, day;
    year=2002;
    yearday=370;
    month=11;
    day=22;
    
    int ret;

    ret=day_of_year(year, month, day);
    if(ret == -1)
        printf("Invalid year\n");
    else if(ret == -2)
        printf("Invalid month\n");
    else
        printf("Day of year => %d\n", ret);

    ret = month_day(year, yearday, &month, &day);
    if(ret == -1)
        printf("Invalid year\n");
    else if(ret == -2)
        printf("Invalid yearday\n");
    else
        printf("Day of year =>=> month => %d; day => %d\n", month, day);

    return 0;
}
