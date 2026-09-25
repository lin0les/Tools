#include <stdio.h>

#define ML 100
#define TS 8

static char buf[ML];
static int bufp=0;

void ungetch(int c){
    buf[bufp++]=c;
}

int getch(){
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void detab(char *s, int ts){
    int c, counter=0;

    while((c=getch()) != EOF){
        if(counter < ML-1)
            if(c == '\'){
                ungetch(c);
                if((c=getchar) == 't')
                    while(counter < ML-1 && counter%ts != 0)
                        *(s+counter++)=' ';
                *s(counter++)=
            }
    }
}

int main(int argc, char *argv[]){

    return 0;
}

