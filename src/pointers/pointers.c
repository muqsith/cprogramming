#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// void swap2(int &a, int &b){ } this is possible in c++ and not in c
// since above is possible in c++ the caller can just say swap(m, n); no need to say swap(&m, &n);



int mstrlen(char *p)
{
    int i = 0;
    for (int c = 0; (c = p[i]) != '\0'; i++)
        ;
    return i;
}


int main()
{
    int p = 10, q = 20;
    printf("before swap p = %d, q = %d\n", p, q);
    swap(&p, &q);
    printf("after swap p = %d, q = %d\n", p, q);

    int n = 40;
    int *x = &n;
    printf("value at %p is %d\n", x, *x);


    char arr[] = "hello world";

    printf("%s\n", arr);

    char *cp = arr;
    char *pp;
    pp = arr;

    printf("%s\n", cp);

    printf("%c\n", *(arr+2));
    printf("%c\n", pp[2]);

    printf("Length of string is %d\n", mstrlen(arr));
    printf("Length of string is %d\n", mstrlen("muqsith"));

    printf("value of \\0 is %d\n", '\0');
}
