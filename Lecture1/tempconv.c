/*
* Print Fahrenheit to Celsius conversion table
* --------------------------------------------
* Filonov Pavel (filonovpv at gmail.com)
* 5 Feb 2015
*/

#include <stdio.h>

int main()
{
    float farh, celsius;
    int lower, upper, step;

    lower = 0; /* lower temperature bound for table */
    upper = 300; /* upper bound */
    step = 20; /* row step value */

    farh = lower;
    while (farh <= upper) {
        celsius = (5.0/9.0) * (farh - 32.0);
        printf("%3.0f %6.1f\n", farh, celsius);
        farh = farh + step;
    }
    return 0;
}