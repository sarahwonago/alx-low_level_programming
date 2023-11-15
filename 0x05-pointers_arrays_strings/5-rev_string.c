#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to the string to be reversed.
 */

void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
