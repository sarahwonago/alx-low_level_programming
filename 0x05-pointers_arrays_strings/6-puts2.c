#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: The input string.
 *
 * Description: This function prints every other character of the given string,
 * starting with the first character, and ends with a newline.
 */

void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 2)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}

