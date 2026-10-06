#include <stdio.h>
#include <stdlib.h>
#include "tail.h"

#define MAXLINES 1000000 /* max #lines  to be stored */
char *lineptr[MAXLINES]; /* pointers to text lines */

int main(int argc, char *argv[]){
    int n = DEFAULT; /* default value of output lines */
    int nlines; /*  number of lines read */

    if(argc > 2){
        printf("Usage: %s [-N]\n", *argv);
        return 1;
    }else if(argc == 2){
        if(*argv[1] != '-'){
            printf("Usage: %s [-N]\n", *argv);
            return 1;
        }
        n = atoi(++argv[1]);
    }

    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        writelines(lineptr, nlines, n);
    }else{
        printf("error: input too big\n");
        return 1;
    }

    return 0;
}
