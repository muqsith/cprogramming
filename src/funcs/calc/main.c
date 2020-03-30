#include <stdio.h>
#include "calc.h"

int main()
{
    extern char name[];
    // extern char city[]; // will result in error because city is private to sum.c file
    extern int result;
    result = 5;

    result = sum(10);
    printf("sum: %d\n", result);
    result = sum(20);
    printf("sum: %d\n", result);

    //printf("%s lives in %s\n", name, city); // will result in error because city is private to sum.c file
    printf("%s\n", name);
}
