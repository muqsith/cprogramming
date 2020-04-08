#include <stdio.h>

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

int applyFn(int(*fn)(int, int), int a, int b)
{
    return fn(a,b);
}

int calc(int op, int a, int b)
{
    int result;
    switch(op)
    {
        case '+':
        {
            result = applyFn(sum, a, b);
            break;
        }
        case '-':
        {
            result = applyFn(sub, a, b);
            break;
        }
        case '*':
        {
            result = applyFn(mul, a, b);
            break;
        }
        case '/':
        {
            result = applyFn(div, a, b);
            break;
        }
    }

    return result;
}



int main()
{
    printf("sum of 2 and 3 is %d\n", calc('+', 2, 3));
    printf("division of 2 by 0 is %d\n", calc('/', 2, 0));
}
