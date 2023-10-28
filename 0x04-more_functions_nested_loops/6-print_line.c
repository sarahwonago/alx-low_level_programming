#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: input integer
 * Return: 0
 */

void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (n > 0)
        {
            _putchar('_');
            n--;
        }
        _putchar('\n');
    }
}

