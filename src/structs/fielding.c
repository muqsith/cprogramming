#include <stdio.h>

struct keysflag
{
    unsigned int is_keyword : 1; // single bit width field, with use of colon we can say how many bits width field we want
    unsigned int is_extern : 1;
    unsigned int is_static : 3; // 3 bits wide
} flags = { 1, 1, 7 };

int main()
{

    unsigned char c = 255;
    printf("Value of c is %d\n", c);
    c = c ^ flags.is_extern; // assuming flags.is_extern is single bit field and with value 1 the xor operation should set c to 254
    printf("Value of c is %d\n", c);
    if (flags.is_extern)
    {
        printf("Is external variable\n");
    }
}
