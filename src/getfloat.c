#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

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

int getfloat(float *pn){
    int c, sign;

    while(isspace(c = getch()))
        ;

    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    
    sign = (c == '-') ? -1 : 1;

    if(c == '-' || c == '+'){
        int next = getch();

        if(!isdigit(next)){
            ungetch(next);
            ungetch(c);
            return 0;
        }

        c = next;
    }

    bool flag = false;
    double remainer = 0;
    int rc = 0;
    int dot_count = 0;
    for(*pn = 0; isdigit(c) || c == '.'; c = getch()){
        if(c == '.')
            dot_count++;
        if(dot_count >=2){
            ungetch(c);
            return 0;
        }

        if(c == '.'){
            flag = true;
            continue;
        }
            

        if(!flag)
            *pn = 10 * *pn + (c - '0');
        else{
           remainer = 10 * remainer + (c - '0');
           rc++;
        }
    }

    *pn = (*pn + (remainer / pow(10, rc))) * sign;

    if(c != EOF)
        ungetch(c);

    return c;
    
}
