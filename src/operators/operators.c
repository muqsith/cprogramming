#include <stdio.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>
#include <math.h>

void funny(char c, float f) // better always declare int and double
{
    printf("char c is %c and float f is %f\n", c, f);
}

int main()
{
     if (-1)
     {
         printf("Even negative numbers are true\n");
     }

     printf("isdigit('z'): %d\n", iswdigit(L'普'));


     signed long signed_long_minus_one = -1L;

     unsigned long unsigned_long_plus_one = 1UL;

    if (signed_long_minus_one > unsigned_long_plus_one) // here signed_long_minus_one is converted to unsigned long type
    {
        printf("Signed long minus one is greater than unsigned long plus one, spooky\n");
    }
    else
    {
        printf("Signed long minus one is less than unsigned long plus one, normal\n");
    }

    int a = 10;
    double b = 300.90293;

    a += b;

    printf("Val: %d\n", a);

    funny((char)2544, 200293.02930230239200230203);

    printf("Square root of %d is %f\n", a, sqrt(a));


    // increment decrement operators

    int p = 10;
    int q = 0;

    printf("q, p : %d, %d\n", q, p);

    q = p++;
    printf("q, p after (q = p++) : %d, %d\n", q, p);

    p = 10;
    q = 0;
    printf("q, p : %d, %d\n", q, p);

    q = ++p;
    printf("q, p after (q = ++p) : %d, %d\n", q, p);


}
