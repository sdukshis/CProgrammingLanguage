/*
* Print Fahrenheit to Celsius conversion table
* --------------------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 5 Feb 2015
*/

#include <stdio.h>

int main()
{
    float farh;
    for (farh = 0; farh <= 300; farh = farh + 20) {
        printf("%3.0f %6.1f\n", farh, (5.0/9.0)*(farh - 32.0));
    }

    return 0;
}