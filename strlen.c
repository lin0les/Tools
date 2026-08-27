#include <stdio.h>

/*
int strlen(char *s){
    int n;

    for(n = 0; *s != '\0'; s++)
        n++;

    return n;
}
*/

int strlen(char *s){
    char *p = s;
    while(*p != '\0')
        p++;

    return p - s;
}

int main(void){

    char str[] = "Nihad";

    printf("%s\n", str);
    printf("%d\n", strlen(str));

    return 0;
}
