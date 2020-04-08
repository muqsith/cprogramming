#include <stdio.h>

struct node
{
    char *v;
    struct node *left;
    struct node *right;
};


int main()
{
    struct node
        a = { "a", NULL, NULL },
        b = { "b", NULL, &a },
        c = { "c", &a, &b },
        d = { "d", &b, &c },
        e = { "e", &c, &d },
        f = { "f", &d, &e }
        ;
}
