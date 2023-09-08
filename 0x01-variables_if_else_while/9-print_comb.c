#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 * separated by a comma and space, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int n;

    for (n = 48; n < 58; n++)
    {
        putchar(n);

        if (n != 57)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}

