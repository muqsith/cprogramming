#include <stdio.h>

// https://www.quora.com/Why-is-n++-faster-than-n-n+1

int main()
{
    int c, nwhite, nother;
    int a[10];

    nwhite = nother = 0;
    for (int i = 0; i < 10; ++i)
        a[i] = 0;

    while ( (c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++a[c - '0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
        {
            ++nother;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("occurences of number %d: ", i);
        for (int j = 0; j < a[i]; ++j)
        {
            printf("|");
        }
        printf("\n");
    }

    printf("occurences of white spaces: %d\noccurences of other characters: %d\n", nwhite, nother);
}
