#include <stdio.h>

double power(int, int);

int main()
{
    int x, y;
    x = getchar() - '0';
    y = getchar() - '0';
    printf("%d power %d is %.0f\n", x, y, power(x, y));
}

double power(int x, int y)
{
    double result = 1;
    for (int i = 0; i < y; ++i)
        result = result * x;

    return result;
}
