#include <stdio.h>

char name[] = "irfan";
static char city[] = "Dubai"; // this is private to this file

int sum(int a)
{
    extern int result;

    static int counter = 10;

    // counter = 10;

    printf("sum called %d times\n", ++counter);

    return result + a;
}
