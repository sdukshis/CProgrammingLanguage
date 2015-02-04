/*
* Print Fahrenheit to Celsius conversion table
* --------------------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 5 Feb 2015
*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    float farh;
    for (farh = LOWER; farh <= UPPER; farh = farh + STEP) {
        printf("%3.0f %6.1f\n", farh, (5.0/9.0)*(farh - 32.0));
    }

    return 0;
}