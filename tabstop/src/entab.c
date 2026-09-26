#include "tabstop.h"

void entab(){
    int pos=1, c;
    int spaces=0, tabs=0;

    while((c=getch()) != EOF){
        if(c == ' '){
            if(pos%TS != 0){
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
                pos=pos+(TS-(pos-1)%TS)-1;
            }
            for(int i=0; i < spaces; i++)
                putchar(' ');
            spaces=0;

            putchar(c);

            if(c == '\n'){
                pos=0;
            }
        }

        ++pos;
    }
}
