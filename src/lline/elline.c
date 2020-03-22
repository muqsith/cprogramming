#include <stdio.h>

#define MAXLEN 1000

int max;
char longest[MAXLEN], line[MAXLEN];

int mgetline(void);
void mcopy(void);

int main()
{
    extern int max;
    extern char longest[];

    int len;
    max = len = 0;

    while ( (len = mgetline()) > 0)
    {
        if (len > max)
        {
            max = len;
            mcopy();
        }
    }

    printf("\nLongest line: %s\n", longest);
    printf("Length of longest line is %d\n", max);
}


int mgetline()
{
    extern char line[];

    int i, c;
    i = 0;
    for (; i < MAXLEN && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0'; // string terminator
    return i;
}


void mcopy()
{
    extern char longest[], line[];

    int i, c;
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
