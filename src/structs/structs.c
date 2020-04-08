#include <stdio.h>
#include <math.h>

// gcc -o bin/struct src/structs/structs.c -lm

struct point
{
    int x;
    int y;
};

struct  rect
{
    struct point p1;
    struct point p2;
};

double distance(struct point *p)
{
    return sqrt((double)(p->x * p->x) + (double)(p->y * p->y));
}

struct point makepoint(int a, int b)
{
    struct point p;
    p.x = a;
    p.y = b;
    return p;
}

struct point* addpoint(struct point *a, struct point *b)
{
    a->x += b->x;
    a->y += b->y;
    return a;
}

int main(int argc, char *argv[])
{

    struct point l = {2, 3}, m = {5, 9};

    struct point points[] = {
        {0, 1},
        {1, 0},
        {2, 3}
    };

    printf("Distance of points[2] from origin %.2f\n", distance(points+2)); // is same as distance(&points[2])

    struct point a, b;
    printf("sizeof struct point p is %ld\n", sizeof(a));


    a = makepoint(10, 50);
    printf("Distance of a from origin %.2f\n", distance(&a));

    b = makepoint(20, 100);
    printf("Distance of b from origin %.2f\n", distance(&b));

    struct point *c = addpoint(&a,&b);
    printf("Distance of a from origin %.2f\n", distance(&a));
    printf("Distance of (a+b) from origin %.2f\n", distance(c));

    return 0;
}
