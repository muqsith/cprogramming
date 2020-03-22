#include <stdio.h>

#define MAXLEN 1000

int mgetline(char[], int);
void mcopy(char[], char[]);

int main()
{
    char longest[MAXLEN], line[MAXLEN];
    int max, len;
    max = len = 0;

    while ( (len = mgetline(line, MAXLEN)) > 0)
    {
        if (len > max)
        {
            max = len;
            mcopy(line, longest);
        }
    }

    printf("\nLongest line: %s\n", longest);
    printf("Length of longest line is %d\n", max);
}


int mgetline(char line[], int limit)
{
    int i, c;
    i = 0;
    for (; i < limit && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0'; // string terminator
    return i;
}


void mcopy(char src[], char dst[])
{
    int i, c;
    i = 0;
    while ((dst[i] = src[i]) != '\0')
        ++i;
}
