#include <stdio.h>
#include <ctype.h>

#define SIZE 15

int stack[SIZE];
int sp = 0;

int getch(void){
    if(sp > 0)
        return stack[--sp];
    else
        return getchar();
}

void ungetch(int ch){
    if(sp >= SIZE)
        printf("ungetch: too many characters\n");
    else
        stack[sp++] = ch;
}

int getint(int *pn){
    int c, sign;
    while(isspace(c = getch()))
        ;

    if(!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if(c == '+' || c == '-'){
        int temp = getch();

        if(!isdigit(temp)){
            ungetch(temp);
            ungetch(c);
            *pn = 0;
            return  0;
        }

        c = temp;
    }

    for(*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;

    if(c != EOF)
        ungetch(c);

    return c;
}

int main(int argc, char *argv[]){

    int n;

    getint(&n);

    printf("%d\n", n);

    return 0;
}

