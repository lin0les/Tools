#include <stdio.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n;
    } else
        return 0;
}

void afree(char *p){
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

int main(void){
    int i = 0;
    const int size = 6;
    char *p = alloc(size);

    while(i < 7)
        scanf("%c", p+i++);
    *(p + i) = '\0';

    printf("%s\n", p);

    afree(p);
    printf("%s\n", p);

    return 0;
}
