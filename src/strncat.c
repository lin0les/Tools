char *strncat(char *s, char *t, int n){
    char *start = s;
    int i = 0;

    while(*s++) ;
    s--;
    
    while(*t && i < n){
        *s++ = *t++;
        i++;
    }
    *s = '\0';

    return start;
}
