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


int main()
{
    int p = 10, q = 20;
    printf("before swap p = %d, q = %d\n", p, q);
    swap(&p, &q);
    printf("after swap p = %d, q = %d\n", p, q);

    int n = 40;
    int *x = &n;
    printf("value at %p is %d\n", x, *x);
}
