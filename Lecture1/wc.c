/*
* Counts number of words from input 
* ---------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 6 Feb 2015
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int nwords = 0; /* number of words */
    int state = OUT; /* in or out word */
    int c;

    while ((c = getchar()) != EOF) {

        if (c == '\n' || c == ' ' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            ++nwords;
            state = IN;
        }
    }

    printf("%d\n", nwords);

    return 0;
}
