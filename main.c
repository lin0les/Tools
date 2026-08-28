#include <stdio.h>
#include "functions.h"

int main(void){

        printf("%d\n", strncmp("hello", "hello", 0));       // 0
    printf("%d\n", strncmp("hello", "hello", 1));       // 0
    printf("%d\n", strncmp("hello", "hello", 3));       // 0
    printf("%d\n", strncmp("hello", "hello", 5));       // 0
    printf("%d\n", strncmp("hello", "hello", 10));      // 0

    printf("%d\n", strncmp("hello", "hella", 0));       // 0
    printf("%d\n", strncmp("hello", "hella", 1));       // 0
    printf("%d\n", strncmp("hello", "hella", 4));       // 0
    printf("%d\n", strncmp("hello", "hella", 5));       // positive
    printf("%d\n", strncmp("hello", "hella", 10));      // positive

    printf("%d\n", strncmp("hella", "hello", 4));       // 0
    printf("%d\n", strncmp("hella", "hello", 5));       // negative
    printf("%d\n", strncmp("hella", "hello", 10));      // negative

    printf("%d\n", strncmp("abc", "abd", 1));           // 0
    printf("%d\n", strncmp("abc", "abd", 2));           // 0
    printf("%d\n", strncmp("abc", "abd", 3));           // negative
    printf("%d\n", strncmp("abc", "abd", 10));          // negative

    printf("%d\n", strncmp("abd", "abc", 1));           // 0
    printf("%d\n", strncmp("abd", "abc", 2));           // 0
    printf("%d\n", strncmp("abd", "abc", 3));           // positive
    printf("%d\n", strncmp("abd", "abc", 10));          // positive

    printf("%d\n", strncmp("abc", "abcdef", 0));        // 0
    printf("%d\n", strncmp("abc", "abcdef", 1));        // 0
    printf("%d\n", strncmp("abc", "abcdef", 2));        // 0
    printf("%d\n", strncmp("abc", "abcdef", 3));        // 0
    printf("%d\n", strncmp("abc", "abcdef", 4));        // negative
    printf("%d\n", strncmp("abc", "abcdef", 10));       // negative

    printf("%d\n", strncmp("abcdef", "abc", 0));        // 0
    printf("%d\n", strncmp("abcdef", "abc", 1));        // 0
    printf("%d\n", strncmp("abcdef", "abc", 2));        // 0
    printf("%d\n", strncmp("abcdef", "abc", 3));        // 0
    printf("%d\n", strncmp("abcdef", "abc", 4));        // positive
    printf("%d\n", strncmp("abcdef", "abc", 10));       // positive

    printf("%d\n", strncmp("", "", 0));                 // 0
    printf("%d\n", strncmp("", "", 1));                 // 0
    printf("%d\n", strncmp("", "", 10));                // 0

    printf("%d\n", strncmp("", "abc", 0));              // 0
    printf("%d\n", strncmp("", "abc", 1));              // negative
    printf("%d\n", strncmp("", "abc", 10));             // negative

    printf("%d\n", strncmp("abc", "", 0));              // 0
    printf("%d\n", strncmp("abc", "", 1));              // positive
    printf("%d\n", strncmp("abc", "", 10));             // positive

    printf("%d\n", strncmp("a", "b", 1));               // negative
    printf("%d\n", strncmp("b", "a", 1));               // positive
    printf("%d\n", strncmp("a", "a", 1));               // 0

    printf("%d\n", strncmp("Nihad", "Nihad", 5));       // 0
    printf("%d\n", strncmp("Nihad", "Nihad", 10));      // 0
    printf("%d\n", strncmp("Nihad", "Nihadx", 5));      // 0
    printf("%d\n", strncmp("Nihad", "Nihadx", 6));      // negative
    printf("%d\n", strncmp("Nihadx", "Nihad", 6));      // positive

    printf("%d\n", strncmp("Nihad Huseynov", "Nihad Huseynov", 14));  // 0
    printf("%d\n", strncmp("Nihad Huseynov", "Nihad Huseyn", 13));     // 0
    printf("%d\n", strncmp("Nihad Huseynov", "Nihad Huseyn", 14));     // positive

    printf("%d\n", strncmp("AAAAA", "AAAAB", 3));       // 0
    printf("%d\n", strncmp("AAAAA", "AAAAB", 4));       // 0
    printf("%d\n", strncmp("AAAAA", "AAAAB", 5));       // negative

    printf("%d\n", strncmp("AAAAB", "AAAAA", 3));       // 0
    printf("%d\n", strncmp("AAAAB", "AAAAA", 4));       // 0
    printf("%d\n", strncmp("AAAAB", "AAAAA", 5));       // positive

    printf("%d\n", strncmp("12345", "12346", 4));       // 0
    printf("%d\n", strncmp("12345", "12346", 5));       // negative
    printf("%d\n", strncmp("12346", "12345", 5));       // positive

    printf("%d\n", strncmp("hello world", "hello world!", 11)); // 0
    printf("%d\n", strncmp("hello world", "hello world!", 12)); // negative
    printf("%d\n", strncmp("hello world!", "hello world", 12)); // positive

    printf("%d\n", strncmp("abcabc", "abcabd", 3));     // 0
    printf("%d\n", strncmp("abcabc", "abcabd", 5));     // negative
    printf("%d\n", strncmp("abcabd", "abcabc", 5));     // positive

    printf("%d\n", strncmp("test", "testing", 4));      // 0
    printf("%d\n", strncmp("test", "testing", 5));      // negative
    printf("%d\n", strncmp("testing", "test", 4));      // 0
    printf("%d\n", strncmp("testing", "test", 5));      // positive

    return 0;
}
