/*
* Prints the longest line from standart input
* -------------------------------------------
* Filonov Pavel
*/

#include <stdio.h>

#define MAXLINE 1024

int nextline(char line[], int maxline);
void copy(char to[], char from[], int size);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = nextline(line)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line, len);
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

int nextline(char line[], int maxline)
{
    int c, i;
    for (i = 0; i < maxline - 1 && ((c = getchar()) != EOF) && (c != '\n'); ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[], int size)
{
    int i;
    for (i = 0; i < size; ++i) {
        to[i] = from[i];
    }
}