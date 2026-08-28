#include <stdio.h>

#define MAX 20

int stack[MAX];
int sp = 0;

int getch(void){
    return (sp > 0) ? stack[--sp] : getchar();
}

void ungetch(int ch){
    if(sp >= MAX)
        printf("stack is full\n");
    else
        stack[sp++] = ch; 
}
