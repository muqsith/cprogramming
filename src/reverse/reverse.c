#include <stdio.h>

#define MAX 1000

void reverse(char[]);

int main()
{
    char s[MAX];
    int c, i;

    i = 0;

    for (;(c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    s[i] = '\0';

    reverse(s);
    printf("%s\n", s);
}


void reverse(char s[])
{
    int c, len, halflen;

    len = 0;

    while ((c = s[len]) != '\0')
        ++len;

    halflen = len/2;

    for (int i = 0, j = (len - 1); i < halflen; ++i, --j)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


