#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The input string.
 *
 * Description: This function prints the second half of the given string,
 * or the last n characters if the length is odd, followed by a newline.
 */

void puts_half(char *str)
{
    int length = 0;
    int i;

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = (length + 1) / 2; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
