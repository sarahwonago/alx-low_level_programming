#include <stdio.h>

/**
 * main - prints combination of numbers
 * Description: code to print combination of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
    int firstDigit, secondDigit;

    for (firstDigit = 0; firstDigit <= 8; firstDigit++)
    {
        for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
        {
            putchar(firstDigit + '0');
            putchar(secondDigit + '0');

            if (firstDigit != 8 || secondDigit != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');
    return (0);
}