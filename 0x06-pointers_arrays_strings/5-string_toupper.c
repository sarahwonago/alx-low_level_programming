#include "main.h"

/**
 * string_toupper - Changes all lowercase letters in a string to uppercase
 * @st: Input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *st)
{
	int ct = 0;

	while (*(st + ct) != '\0')
	{
		if (*(st + ct) >= 'a' && *(st + ct) <= 'z')
			*(st + ct) = *(st + ct) - 32;
		ct++;
	}
	return (st);
}
