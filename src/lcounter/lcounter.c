#include <stdio.h>

int main()
{
    long nl;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
    }

    printf("Number of lines: %ld\n", nl);
}
