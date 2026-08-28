#include <stdio.h>
#include "functions.h"

int main(void){

    printf("%d\n", strend("Nihad Huseynov", "Huseynov"));        // 1
    printf("%d\n", strend("Nihad Huseynov", "Nihad"));           // 0
    printf("%d\n", strend("Nihad", "Nihad"));                    // 1
    printf("%d\n", strend("Nihad", "Nihad Huseynov"));           // 0

    printf("%d\n", strend("Nihad", "d"));                        // 1
    printf("%d\n", strend("Nihad", "N"));                        // 0
    printf("%d\n", strend("Nihad", "ad"));                       // 1
    printf("%d\n", strend("Nihad", "had"));                      // 1
    printf("%d\n", strend("Nihad", "ihad"));                     // 1

    printf("%d\n", strend("SalamNihad", "Nihad"));              // 1
    printf("%d\n", strend("SalamNihad", "Salam"));              // 0
    printf("%d\n", strend("SalamNihad", "amN"));                // 0
    printf("%d\n", strend("SalamNihad", "Nihad"));              // 1

    printf("%d\n", strend("abcabc", "abc"));                    // 1
    printf("%d\n", strend("abcabc", "bc"));                     // 1
    printf("%d\n", strend("abcabc", "abcabc"));                 // 1
    printf("%d\n", strend("abcabc", "a"));                      // 0
    printf("%d\n", strend("abcabc", "ca"));                     // 0

    printf("%d\n", strend("hello world", "world"));             // 1
    printf("%d\n", strend("hello world", "hello"));             // 0
    printf("%d\n", strend("hello world", "o world"));           // 1
    printf("%d\n", strend("hello world", " world"));            // 1

    printf("%d\n", strend("test", "testing"));                  // 0
    printf("%d\n", strend("test", "tests"));                    // 0
    printf("%d\n", strend("test", "test"));                     // 1
    printf("%d\n", strend("testing", "test"));                  // 0

    printf("%d\n", strend("", "abc"));                           // 0
    printf("%d\n", strend("abc", ""));                           // ?
    printf("%d\n", strend("", ""));                              // ?

    printf("%d\n", strend("AAAAA", "AAA"));                     // 1
    printf("%d\n", strend("AAAAA", "AAAA"));                    // 1
    printf("%d\n", strend("AAAAA", "AAAAAA"));                  // 0

    printf("%d\n", strend("Nihad Huseynov ", "Huseynov"));      // 0
    printf("%d\n", strend("Nihad Huseynov", "huseynov"));       // 0
    printf("%d\n", strend("Nihad Huseynov", "HUSEYNOV"));       // 0

    return 0;
}
