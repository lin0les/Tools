#ifndef TABSTOP_H
#define TABSTOP_H

#include <stdio.h>
#define ML 100
#define TS 8

void ungetch(int c);
int getch();
void detab(char *);
void entab();

#endif
