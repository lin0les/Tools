#include <stdio.h>
#include "functions.h"

int main(void){
        int i;
        char s[100];
        i = my_getline(s, 10);
        printf("%d - %s\n", i, s);
        return 0;
}
