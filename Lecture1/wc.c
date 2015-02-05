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

    while (getchar() != EOF) {
        ++nchar;
    }

    printf("%d\n", nchar);

    return 0;
}
