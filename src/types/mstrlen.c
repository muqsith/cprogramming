#include <stdio.h>

#define SS  "Paris is a nice city"  " and it would be great if one could go there " \
    " with the one they are in love"

int mstrlen(char s[])
{
    int c = 0, i = 0;
    for (;(c = s[i]) != '\0'; i++)
        ;
    return i;
}


int main()
{
    char s[] = "hello, world";
    int length = mstrlen(s);
    printf("Len: %d\n", length);

    printf("Len of constant: %d\n", mstrlen(SS));
    return 0;
}
