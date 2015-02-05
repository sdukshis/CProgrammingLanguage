/*
* copy all input symbols to standart output
* -----------------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 5 Feb 2015
*/

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}
