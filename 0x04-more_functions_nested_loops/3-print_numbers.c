#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
    char n = '0';

    while (n <= '9')
    {
        _putchar(n);
        n++;
    }

    _putchar('\n');
}



