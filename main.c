#include <stdio.h>
#include "functions.h"

int main(void){

    char name[] = "Nihad";
    char surname[] = "Huseynov";
    
    char temp[100];

    strcpy(temp, name);

    printf("%s\n", temp);

    return 0;
}
