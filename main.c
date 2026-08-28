#include <stdio.h>
#include "functions.h"

int main(void){
    char dest[100];

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 0));       // hello

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 1));       // hellow

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 2));       // hellowo

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 3));       // hellowor

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 4));       // helloworl

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 5));       // helloworld

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 6));       // helloworld

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "world", 10));      // helloworld


    strcpy(dest, "");
    printf("%s\n", strncat(dest, "hello", 0));       // 

    strcpy(dest, "");
    printf("%s\n", strncat(dest, "hello", 1));       // h

    strcpy(dest, "");
    printf("%s\n", strncat(dest, "hello", 3));       // hel

    strcpy(dest, "");
    printf("%s\n", strncat(dest, "hello", 5));       // hello

    strcpy(dest, "");
    printf("%s\n", strncat(dest, "hello", 10));      // hello


    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "", 0));            // hello

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "", 5));            // hello

    strcpy(dest, "hello");
    printf("%s\n", strncat(dest, "", 10));           // hello


    strcpy(dest, "a");
    printf("%s\n", strncat(dest, "b", 0));            // a

    strcpy(dest, "a");
    printf("%s\n", strncat(dest, "b", 1));            // ab

    strcpy(dest, "a");
    printf("%s\n", strncat(dest, "b", 10));           // ab


    strcpy(dest, "abc");
    printf("%s\n", strncat(dest, "def", 1));          // abcd

    strcpy(dest, "abc");
    printf("%s\n", strncat(dest, "def", 2));          // abcde

    strcpy(dest, "abc");
    printf("%s\n", strncat(dest, "def", 3));          // abcdef

    strcpy(dest, "abc");
    printf("%s\n", strncat(dest, "def", 10));         // abcdef


    strcpy(dest, "Nihad");
    printf("%s\n", strncat(dest, " Huseynov", 0));    // Nihad

    strcpy(dest, "Nihad");
    printf("%s\n", strncat(dest, " Huseynov", 1));    // Nihad 

    strcpy(dest, "Nihad");
    printf("%s\n", strncat(dest, " Huseynov", 6));    // Nihad Husey

    strcpy(dest, "Nihad");
    printf("%s\n", strncat(dest, " Huseynov", 9));    // Nihad Huseynov

    strcpy(dest, "Nihad");
    printf("%s\n", strncat(dest, " Huseynov", 20));   // Nihad Huseynov


    strcpy(dest, "hello ");
    printf("%s\n", strncat(dest, "world", 1));        // hello w

    strcpy(dest, "hello ");
    printf("%s\n", strncat(dest, "world", 3));        // hello wor

    strcpy(dest, "hello ");
    printf("%s\n", strncat(dest, "world", 5));        // hello world

    strcpy(dest, "hello ");
    printf("%s\n", strncat(dest, "world", 10));       // hello world


    strcpy(dest, "AAAAA");
    printf("%s\n", strncat(dest, "BBB", 0));          // AAAAA

    strcpy(dest, "AAAAA");
    printf("%s\n", strncat(dest, "BBB", 1));          // AAAAAB

    strcpy(dest, "AAAAA");
    printf("%s\n", strncat(dest, "BBB", 2));          // AAAAABB

    strcpy(dest, "AAAAA");
    printf("%s\n", strncat(dest, "BBB", 3));          // AAAAABBB

    strcpy(dest, "AAAAA");
    printf("%s\n", strncat(dest, "BBB", 10));         // AAAAABBB


    strcpy(dest, "12345");
    printf("%s\n", strncat(dest, "67890", 2));        // 1234567

    strcpy(dest, "12345");
    printf("%s\n", strncat(dest, "67890", 5));        // 1234567890

    strcpy(dest, "12345");
    printf("%s\n", strncat(dest, "67890", 10));       // 1234567890


    strcpy(dest, "hello world");
    printf("%s\n", strncat(dest, "!!!", 1));          // hello world!

    strcpy(dest, "hello world");
    printf("%s\n", strncat(dest, "!!!", 2));          // hello world!!

    strcpy(dest, "hello world");
    printf("%s\n", strncat(dest, "!!!", 3));          // hello world!!!

    strcpy(dest, "hello world");
    printf("%s\n", strncat(dest, "!!!", 10));         // hello world!!!

    return 0;
}
