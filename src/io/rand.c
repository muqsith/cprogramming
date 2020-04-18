#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int elements = 20;

    double *p = malloc(elements * sizeof(double));
    double *start;
    start = p;

    srand((unsigned)(time(NULL) - 100000));

    for (int i = 0; i < elements; i++)
        p[i] = rand() * (i + 1);

    while (elements-- > 0)
    {
        printf("Value at %p (element %2d) is %.2f\n", p, elements, *p++);
    }

    free(start);
}
