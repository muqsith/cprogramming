#include <stdio.h>

int main()
{
    char c = 'm';
    short s = 1;
    int i = 2;
    long l = 3;
    float f = 22.7;
    double d = 99.24;

    printf("size of character: %ld bits\n", sizeof(c) * 8);
    printf("size of short integer: %ld bits\n", sizeof(s) * 8);
    printf("size of integer: %ld bits\n", sizeof(i) * 8);
    printf("size of long integer: %ld bits\n", sizeof(l) * 8);
    printf("size of floating point: %ld bits\n", sizeof(f) * 8);
    printf("size of double precision floating point: %ld bits\n", sizeof(d) * 8);

    return 0;
}
