#include <stdio.h>

int my_getline(char *s, int n){
        char c;
        int counter = 0;
        while((c = getchar()) != '\n' && c != EOF && counter < n - 1){
                *s++ = c;
                counter++;
        }

        *s = '\0';

        return counter;
}
