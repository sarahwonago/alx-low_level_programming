#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input integer
 * Return: nothing
 */

void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int spaces = 0;
        while (n > 0)
        {
            int i;

            for (i = 0; i < spaces; i++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
            spaces++;
            n--;
        }
    }
}
