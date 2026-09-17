static char daytab[][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

int day_of_year(int year, int month, int day){
    int i, leap; 
    
    leap = year%4 == 0 && year%100 != 0 && year%400 == 0;

    if(year<1)
        return -1;
    else if(month<1 || month>12)
        return -2;

    for(i=1; i < month; i++)
        day += *(*(daytab+leap)+i);

    return day;
}

int month_day(int year, int yearday, int *pmonth, int *pday){
    int i, leap; 

    leap = year%4 == 0 && year%100 != 0 && year%400 == 0;

    if(year<1)
        return -1;
    else if(yearday<1 || yearday>366)
        return -2;

    for(i=1; yearday > daytab[leap][i]; i++)
        yearday -= *(*(daytab+leap)+i);

    *pmonth=i;
    *pday=yearday;
}

char *month_name(int n){
    static char *name[]={
        "Illegal Month", "January", "Febuary", "March", 
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? *name : *(name+n);
}
