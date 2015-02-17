/*
* Count frequency of digits from standart input
* ---------------------------------------------
* Filonov Pavel
* 12 Feb 2015
*/

#include <stdio.h>

#define NDIGITS 10

int main()
{
    int digits[NDIGITS];
    int c, i;

    for (i = 0; i < NDIGITS; ++i) {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ('0' <= c && c <= '9') {
            ++digits[c - '0'];
        }
    }

    for (i = 0; i < NDIGITS; ++i) {
        printf("%d ", digits[i]);
    }
    printf("\n");
    return 0;
}
