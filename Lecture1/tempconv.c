/*
* Print Fahrenheit to Celsius conversion table
* --------------------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 5 Feb 2015
*/

#include <stdio.h>

int main()
{
    int farh, celsius;
    int lower, upper, step;

    lower = 0; /* lower temperature bound for table */
    upper = 300; /* upper bound */
    step = 20; /* row step value */

    farh = lower;
    while (farh <= upper) {
        celsius = 5 * (farh - 32) / 9;
        printf("%d\t%d\n", farh, celsius);
        farh = farh + step;
    }
    return 0;
}