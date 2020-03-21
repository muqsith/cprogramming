#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    long c, nl, nw, nc;
    int state;

    state = OUT;

    nl = nw = nc = 0;

    while ( (c = getchar()) != EOF )
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n') // \n is checked because there could be lines with just one word
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("characters: %ld, words: %ld, lines: %ld\n", nc, nw, nl);

    return 0;
}
