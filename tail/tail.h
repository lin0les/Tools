#ifndef TAIL_H
#define TAIL_H

#define DEFAULT 10 /* Default for tail print last line */

/* readlines: read input lines */
int readlines(char *lineptr[], int nlines);

/* writelines: print the last n lines */
void writelines(char *lineptr[], int nlines, int n);

/* store input lines in buffer */
char *alloc(int);

#endif
