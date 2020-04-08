#include <stdio.h>
#include <stdarg.h>


void minprintf(char *fmt, ...)
{
    va_list ap;
    char *p, *sval;
    int ival;
    float dval;

    va_start(ap, fmt);

    for (p = fmt; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }

        switch (*++p) // incremented to go beyond '%' character
        {
        case 'd':
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'f':
            dval = va_arg(ap, double);
            printf("%.2f", dval);
            break;
        case 's':
            for (sval = va_arg(ap, char*); *sval; sval++)
                putchar(*sval);
            break;
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap);
}

int main(int argc, char *argv[])
{
    minprintf("Year %d is a %s, and the temperature in Aprils is %f\n", 2020, "beautiful year", 27.67);
}
