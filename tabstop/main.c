#include "tabstop.h"
#include <stdlib.h>

int TABLIST_D[]={8,};
int LEN_D=1;

int main(int argc, char *argv[]){
    

    if(argc > 1){
        int argList[argc-1];
        for(int i=0; i < argc-1; i++)
            argList[i]=atoi(*++argv);
        
        entab(argList, (argc-1));
    } else{
        entab(TABLIST_D, LEN_D);
    }

    return 0;
}
