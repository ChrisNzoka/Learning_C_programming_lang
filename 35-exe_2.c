#include <stdio.h>

/**
 *  main - start
 *
 * Description - testing null statement output
 * From the output, this can also be uses as a program
 *
 * Returns 0 on success
 */

int main (void)
{
    int i, j;

    for (i = 0, j = 1; i < 8; i++, j++)
    printf("%d + %d = %d\n", i, j, i + j);

    for (i = 0, j = 1; i < 8; i++, j++)
    ;
    printf("%d + %d = %d\n", i, j, i + j);
    return (0);
}
