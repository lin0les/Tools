#include <stdio.h>
#include "functions.h"

int main(void){
    char dest[50];
    printf("%s\n", strncpy(dest, "hello", 0));
    printf("%s\n", strncpy(dest, "hello", 1));
    printf("%s\n", strncpy(dest, "hello", 2));
    printf("%s\n", strncpy(dest, "hello", 3));
    printf("%s\n", strncpy(dest, "hello", 4));
    printf("%s\n", strncpy(dest, "hello", 5));
    printf("%s\n", strncpy(dest, "hello", 6));
    printf("%s\n", strncpy(dest, "hello", 10));

    printf("%s\n", strncpy(dest, "a", 0));
    printf("%s\n", strncpy(dest, "a", 1));
    printf("%s\n", strncpy(dest, "a", 2));
    printf("%s\n", strncpy(dest, "a", 10));

    printf("%s\n", strncpy(dest, "abc", 0));
    printf("%s\n", strncpy(dest, "abc", 1));
    printf("%s\n", strncpy(dest, "abc", 2));
    printf("%s\n", strncpy(dest, "abc", 3));
    printf("%s\n", strncpy(dest, "abc", 4));
    printf("%s\n", strncpy(dest, "abc", 10));

    printf("%s\n", strncpy(dest, "abcdef", 1));
    printf("%s\n", strncpy(dest, "abcdef", 2));
    printf("%s\n", strncpy(dest, "abcdef", 3));
    printf("%s\n", strncpy(dest, "abcdef", 4));
    printf("%s\n", strncpy(dest, "abcdef", 5));
    printf("%s\n", strncpy(dest, "abcdef", 6));
    printf("%s\n", strncpy(dest, "abcdef", 7));
    printf("%s\n", strncpy(dest, "abcdef", 20));

    printf("%s\n", strncpy(dest, "", 0));
    printf("%s\n", strncpy(dest, "", 1));
    printf("%s\n", strncpy(dest, "", 5));
    printf("%s\n", strncpy(dest, "", 10));

    printf("%s\n", strncpy(dest, "hello world", 1));
    printf("%s\n", strncpy(dest, "hello world", 5));
    printf("%s\n", strncpy(dest, "hello world", 6));
    printf("%s\n", strncpy(dest, "hello world", 10));
    printf("%s\n", strncpy(dest, "hello world", 11));
    printf("%s\n", strncpy(dest, "hello world", 12));
    printf("%s\n", strncpy(dest, "hello world", 20));

    printf("%s\n", strncpy(dest, "Nihad Huseynov", 1));
    printf("%s\n", strncpy(dest, "Nihad Huseynov", 5));
    printf("%s\n", strncpy(dest, "Nihad Huseynov", 6));
    printf("%s\n", strncpy(dest, "Nihad Huseynov", 13));
    printf("%s\n", strncpy(dest, "Nihad Huseynov", 14));
    printf("%s\n", strncpy(dest, "Nihad Huseynov", 20));

    printf("%s\n", strncpy(dest, "1234567890", 3));
    printf("%s\n", strncpy(dest, "1234567890", 5));
    printf("%s\n", strncpy(dest, "1234567890", 10));
    printf("%s\n", strncpy(dest, "1234567890", 15));

    printf("%s\n", strncpy(dest, "AAAAAA", 1));
    printf("%s\n", strncpy(dest, "AAAAAA", 3));
    printf("%s\n", strncpy(dest, "AAAAAA", 6));
    printf("%s\n", strncpy(dest, "AAAAAA", 10));

    printf("%s\n", strncpy(dest, "!@#$%^&*()", 3));
    printf("%s\n", strncpy(dest, "!@#$%^&*()", 5));
    printf("%s\n", strncpy(dest, "!@#$%^&*()", 10));
    printf("%s\n", strncpy(dest, "!@#$%^&*()", 20));

    printf("%s\n", strncpy(dest, "   hello", 3));
    printf("%s\n", strncpy(dest, "   hello", 8));
    printf("%s\n", strncpy(dest, "hello   ", 5));
    printf("%s\n", strncpy(dest, "hello   ", 8));

    printf("%s\n", strncpy(dest, "This is a long string", 0));
    printf("%s\n", strncpy(dest, "This is a long string", 5));
    printf("%s\n", strncpy(dest, "This is a long string", 10));
    printf("%s\n", strncpy(dest, "This is a long string", 20));
    printf("%s\n", strncpy(dest, "This is a long string", 50));

    return 0;
}
