#include <stdio.h>

void reverse(char s[], int low, int high){
    if(low < high){
        char temp = s[high];
        s[high] = s[low];
        s[low] = temp;
    }

    while(low < high){
        reverse(s, ++low, --high);
    }
}
