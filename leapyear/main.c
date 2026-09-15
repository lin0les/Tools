#include <stdio.h>

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pday);

int main(int argc, char *argv[]){

    int yearday, year, month, day;
    year=2002;
    yearday=140;
    month=11;
    day=22;

    printf("Day of year => %d\n", day_of_year(year, month, day));
    month_day(year, yearday, &month, &day);
    printf("Day of year =>=> month => %d; day => %d\n", month, day);

    return 0;
}
