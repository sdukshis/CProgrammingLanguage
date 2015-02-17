/*
* Counts the integer power of number
* ----------------------------------
* Filonov Pavel
* 12 Feb 2015
*/

#include <stdio.h>

int power(int a, int n)
{
    int res = 1.0;
    int i;

    for (i = 0; i < n; ++i) {
        res *= a;
    }
    return res;
}

int main()
{
    int i;
    for (i = 0; i <= 10; ++i) {
        printf("%3d %6d\n", i, power(2, i));
    }
    return 0;
}