/* *******************
 * compile: c89 tail.c
 * *******************
*/

#include <stdio.h>
#include <string.h>

#define DEFAULT 10 

#define MAXLINES 5000 /* max #lines  to be stored */
char *lineptr[MAXLINES]; /* pointers to text lines */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines, int n);
char *alloc(int);
int getline(char *, int);

int main(int argc, char *argv[])
{
    int n = DEFAULT; /* default value of output lines */
    int nlines; /*  number of lines read */

    if(argc == 2)
    {
        ++argv;
        n = atoi(++argv[0]);
    }

    if((nlines = readlines(lineptr, MAXLINES)) >= 0)
    {
        writelines(lineptr, nlines, n);
    }
    else
    {
        printf("error: input too big\n");
        return 1;
    }

    return 0;
}

#define MAXLEN 1000 /* max length of any input line */
int getline(char *s, int lim)
{
    int c, i;
    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if(c == '\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}

/* memory allocation */
#define ALLOCSIZE 10000 /* size of available space */

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n) /* return pointer to n characters */
{
    if(allocbuf + ALLOCSIZE - allocp >= n) /* it fits */
    {
        allocp += n;
        return allocp - n; /* old p */
    }
    else /* not enough space */
    {
        return 0;
    }
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while((len = getline(line, MAXLEN)) > 0)
        if(nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else
        {
            line[len-1] = '\0'; /* delete newline */
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

/* writelines: print the last n lines */
void writelines(char *lineptr[], int nlines, int n)
{
    int startLine = 0;
    int i;

    startLine = nlines - n;
    for(i = startLine; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}
