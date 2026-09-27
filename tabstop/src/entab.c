#include "tabstop.h"

void entab(int *tabList, int len){
    int pos=0, c;
    int spaces=0, tabs=0;
    int tabFinder=0;

    while((c=getchar()) != EOF){
        if(c == ' '){
            int tab=tabList[tabFinder%len];
            if((pos+1)%tab != 0){
                ++spaces;
            } else{
                spaces=0;
                ++tabs;
            }
        } else{
            for(int i=0; i < tabs; i++){
                putchar('\t');
            }
            tabs=0;

            if(c == '\t'){
                spaces=0;
                int tab=tabList[tabFinder%len];
                pos=pos+(tab-pos%tab);
                tabFinder++;
            }
            for(int i=0; i < spaces; i++){
                putchar(' ');
            }
            spaces=0;

            putchar(c);

            if(c == '\n'){
                pos=0;
            }
        }

        ++pos;
    }
}
