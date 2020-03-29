#include <stdio.h>

#define square(x) (x) * (x)


int main()
{
    int a = 10;
    int sq_a = square(a+2);

    printf("%d\n", sq_a);
}
