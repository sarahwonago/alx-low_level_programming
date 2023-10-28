#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        if (digit == '2' || digit == '4')
        {
            digit++;
            continue; 
        }

        _putchar(digit);
        digit++;
    }

    _putchar('\n');
}

