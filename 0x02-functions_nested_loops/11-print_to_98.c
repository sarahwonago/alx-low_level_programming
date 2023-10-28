#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

#include <stdio.h>

void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != 98)
                printf("%d, ", i);
            else
                printf("%d", i);
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != 98)
                printf("%d, ", i);
            else
                printf("%d", i);
        }
    }

    printf("\n");
}

