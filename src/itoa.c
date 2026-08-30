#include <stdio.h>

// void itoa(int n, char s[]){
//     static int i = 0;
//     if(n < 0){
//         s[i++] = '-';
//         n = -n;
//     }
//
//     if(n / 10){
//         itoa(n / 10, s);
//     }
//
//     s[i++] = n % 10 + '0';
//     s[i] = '\0';
// }

char *itoa(int n, char *s){
    if(n < 0){
        *s++ = '-';
        n = -n;
    }

    if(n / 10){
       s = itoa(n / 10, s);
    }

    *s++ = n % 10 + '0';
    *s = '\0';
    return s;
}
