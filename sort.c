#include <stdio.h>
#include <string.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;
char *alloc(int n);
void afree(char *p);

#define MAXLINES 5000
#define MAXLEN 1000
char *lineptr[MAXLINES];

int mygetline(char *, int);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *v[], int left, int right);

int main(){
    int nlines;

    if((nlines = readlines(lineptr, MAXLINES)) >= 0){
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while((len = mygetline(line, MAXLEN)) > 0)
        if(nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else{
            line[len-1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    return nlines;
}

void writelines(char *lineptr[], int nlines){
    while(i < nlines)
        printf("%s\n", *lineptr++);
}

int mygetline(char *line, int len){
    char c;
    int counter;

    counter = 0;

    while(counter < len - 1 && (c = getchar()) != EOF && c != '\n'){
        *line++ = c;
        counter++;
    }

    line = '\0';

    return counter;
}

void qsort(char *v[], int left, int right){
    int i, last;

    void swap(char *v[], int i, int j);

    if(left >= right)
        return;

    swap(v, left, (left + right)/2);

    last = left;

    for(i = left + 1; i <= right; i++)
        swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1, right);
}

void swap(char *v[], int i, int j){
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp -n;
    } else
        return 0;
}

void afree(char *p){
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
