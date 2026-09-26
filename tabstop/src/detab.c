#include "tabstop.h"

void detab(void){
    int c, spaces, pos=1;

    while((c=getchar()) != EOF){
        if(c == '\t'){
            spaces=TS-(pos-1)%TS;
            for(int i=0; i < spaces; i++){
                putchar(' ');
                ++pos;
            }
        } else if(c == '\n'){
            putchar(c);
            pos=1;
        } else{
            putchar(c);
            ++pos;
        }
    }
}
