#include "tabstop.h"

void detab(char *s){
    int c, counter=0;

    while((c=getch()) != EOF){
        if(counter < ML-1){
            if(c == '\\'){
                ungetch(c);
                if((c=getchar()) == 't'){
                    getch();
                    if(counter < ML-1){
                        *(s+counter++)=' ';
                    }
                    while(counter < ML-1 && counter%TS != 0){
                        *(s+counter++)=' ';
                    }
                } else{
                    *(s+counter++)=getch();
                    *(s+counter++)=c;
                }
            } else{
                *(s+counter++)=c;
            }
        }
    }
    *(s+counter)='\0';
}
