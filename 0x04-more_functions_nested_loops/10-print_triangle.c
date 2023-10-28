#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: input integer
 * Return: 0
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        putchar('\n');
        return;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
            putchar(' ');

        for (j = 0; j < i + 1; j++)
            putchar('#');

        putchar('\n');
    }
}

