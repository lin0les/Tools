int strncmp(char *s, char *t, int n){
    int i = 0;
    while(*s == *t && *s != '\0' && i < n){
        s++, t++, i++;
    }

    if(i == n)
        return 0;

    return *s - *t;
}
