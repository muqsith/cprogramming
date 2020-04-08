#include <stdio.h>

typedef char* string;

typedef struct node *treeptr;

typedef struct node
{
    string value;
    treeptr left;
    treeptr right;
} tnode;


typedef int(*basicop) (int, int);


int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    if (b != 0)
    {
        return a/b;
    }
    else
    {
        return 0;
    }
}

int applyFn(basicop fn, int a, int b)
{
    return fn(a,b);
}

int calc(int op, int a, int b)
{
    basicop fn;
    switch(op)
    {
        case '+':
        {
            fn = sum;
            break;
        }
        case '-':
        {
            fn = sub;
            break;
        }
        case '*':
        {
            fn = mul;
            break;
        }
        case '/':
        {
            fn = div;
            break;
        }
    }

    return applyFn(fn, a, b);
}


int main()
{
    printf("multiplication of 2 and 3 is %d\n", calc('*', 2, 3));
    printf("division of 2 by 0 is %d\n", calc('/', 2, 0));

    string name = "muqsith";
    printf("%s\n", name);
}
