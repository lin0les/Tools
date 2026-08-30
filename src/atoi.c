int atoi(char *s){
    int n = 0;
    int sign;
    sign = (*s == '-') ? -1 : 1;

    if(sign)
        s++;

    while(*s){
        if(*s >= '0' && *s <= '9')
            n = n * 10 + *s++ - '0';
        else
            return n * sign;
    }

    return n * sign;
}
