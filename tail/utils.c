#include <stdio.h>
#include <string.h>
#include "tail.h"

#define MAXLEN 1000 /* max length of any input line */

static int get_line(char *s, int lim){
    int c, i;
    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while((len = get_line(line, MAXLEN)) > 0)
        if(nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else{
            line[len-1] = '\0'; /* delete newline */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines: print the last n lines */
void writelines(char *lineptr[], int nlines, int n){
    int startLine;
    int i;

    startLine = nlines - n;
    if(startLine < 0)
        startLine = 0;
    for(i = startLine; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}

