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

    c = getchar();
    while (c != EOF) {  /* EOF - is a macro constant from stdio.h
                           it means End Of File */
        putchar(c);
        c = getchar();
    }

    return 0;
}
