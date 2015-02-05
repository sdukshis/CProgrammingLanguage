/*
* Counts number of chars from input 
* ---------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 6 Feb 2015
*/

#include <stdio.h>

int main()
{
    int nchar = 0; /* number of chars */
    int nlines = 0; /* number of lines */
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nlines;
        }
        ++nchar;
    }

    printf("%d %d\n", nlines, nchar);

    return 0;
}
