#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

void using_while()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void using_for()
{
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.1f\n", fahr, ((5.0/9.0) * (fahr - 32)));
}

int main()
{
    using_for();
    return 0;
}
