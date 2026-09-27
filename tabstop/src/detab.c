#include "tabstop.h"

void detab(int *tabList, int len){
    int c, spaces, pos=0;
    int tabFinder=0;

    while((c=getchar()) != EOF){
        if(c == '\t'){
            spaces=tabList[tabFinder%len]-pos%tabList[tabFinder%len];
            tabFinder++;
            for(int i=0; i < spaces; i++){
                putchar(' ');
                ++pos;
            }
        } else if(c == '\n'){
            putchar(c);
            pos=0;
        } else{
            putchar(c);
            ++pos;
        }
    }
}
