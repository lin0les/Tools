/* strend: return 1 if the t occurs at the end of s */
int strend(char *s, char *t){
    int i, j;
    i = j = 0;
    while(*s++) i++;
    while(*t++) j++;
//    s--, t--;

    if(i < j) return 0;

    while(--j >= 0 && *--s == *--t)
        ;

    if(j < 0) return 1;

    return 0;
}
