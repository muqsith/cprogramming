#include <stdio.h>


#define A   120     // integer constant
#define B   209320930L  // long constant
#define C   3593UL  // unsigned long constant
#define D   99.282  // double floating point constant
#define E   21.49e7   // double floating point constant
#define F   33.99f  // floating point constant
#define G   202.10e19L  // long double floating point constant

#define H   037 // integer 31 constant represented in octal form
#define I   0xF // integer 15 constant represented in hex form
#define J   0x9AFUL   // hex integer followed by UL unsigned long

#define ZERO    '0' // character constant

#define OCTAL_VERTICAL_TAB    '\013' // octal binary form
#define OCTAL_BELL    '\007'

#define HEX_VERTICAL_TAB    '\xb' // hex binary form
#define HEX_BELL    '\x7'

#define SS  "Paris is a nice city"  " and it would be great if one could go there " \
    " with the one they are in love"

enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main()
{
    char c = 'm';
    short s = 1;
    int i = 2;
    long l = 3;
    float f = 22.7;
    float f2 = 2e4;
    double d = 99.24;

    long double dd = 59.94;

    printf("size of character: %ld bits\n", sizeof(c) * 8);
    printf("size of short integer: %ld bits\n", sizeof(s) * 8);
    printf("size of integer: %ld bits\n", sizeof(i) * 8);
    printf("size of long integer: %ld bits\n", sizeof(l) * 8);
    printf("size of floating point: %ld bits\n", sizeof(f) * 8);
    printf("size of double precision floating point: %ld bits\n", sizeof(d) * 8);

    printf("size of long double precision floating point: %ld bits\n", sizeof(dd) * 8);

    printf("2e4 and 9e1 is %.0f and %.0f \n", f2, 9e1);

    printf("long double %.0Lf\n", 99.0e2L);

    printf("%s\n", SS);

    printf("January = %d  \n", JAN);

    return 0;
}
