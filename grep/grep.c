#include <stdio.h>
#include <string.h>
#define MAXLINE 4

int mygetline(char *line, int max){
    int i,c;
    i = 0;
    while(i < max-1 && (c=getchar()) != EOF && c != '\n'){
        *line++=c;
        i++;
    }
    *line='\0';

    return i;
}

int main(int argc, char *argv[]){

    char line[MAXLINE];
    int found=0;

    if(argc != 2)
        printf("Usage: find patter\n");
    else
        while(mygetline(line, MAXLINE) > 0)
            if(strstr(line, argv[1]) != NULL){
                printf("%s\n", line);
                found++;
            }
    return found;
}

