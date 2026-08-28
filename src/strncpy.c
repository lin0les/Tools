char *strncpy(char *s, char *t, int n){
    char *start = s;

    int i = 0;

    while(*t && i < n){
        *start++ = *t++;
        i++;
    }
    
    while(i < n){
        *start++ = '\0';
        i++;
    }
    return s;
}
