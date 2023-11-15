#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Description: This function prints the second half of the given string,
 * and ends with a newline. If the number of characters is odd, it prints
 * the last n characters of the string, where n = (length_of_the_string - 1) / 2.
 */

void puts_half(char *str)
{
    int length = 0;
    int i, start;

    while (str[length] != '\0')
    {
        length++;
    }

    start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

    for (i = start; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
