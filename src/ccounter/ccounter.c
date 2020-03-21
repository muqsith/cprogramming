#include <stdio.h>

int main()
{
    long nc;

    while (getchar() != EOF)
        ++nc;

    printf("Number of characters = %ld\n", nc);
}
