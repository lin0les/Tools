#include <stdio.h>
#include "functions.h"

int main(void){

    char name[100] = "Nihad";
    char surname[100] = "Huseynov";

    strcat(name, " ");
    strcat(name, surname);

    printf("%s\n", name);

    return 0;
}
