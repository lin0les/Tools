#include "tabstop.h"

static char buf[2];
static int bufp=0;

void ungetch(int c){
    buf[bufp++]=c;
}

int getch(){
    return (bufp > 0) ? buf[--bufp] : getchar();
}
