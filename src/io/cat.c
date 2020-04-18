#include <stdio.h>
#include <stdlib.h>

void filecopy(FILE *ip, FILE *op)
{
    int c;
    while ((c = getc(ip)) != EOF)
        putc(c, op);
}

int main(int argc, char *argv[])
{
    char *prog = argv[0];
    FILE *fp;
    if (argc == 1)
    {
        filecopy(stdin, stdout);
    }
    else
    {
        while (--argc > 0)
        {
            if ((fp = fopen(*++argv, "r")) == NULL)
            {
                fprintf(stderr, "\n*** %s: can't open the file %s\n", prog, *argv);
                exit(1);
            }
            else
            {
                filecopy(fp, stdout);
                fclose(fp);
            }
        }

    }

    if (ferror(stdout))
    {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        exit(2);
    }

    system("date");

    exit(0);
}
