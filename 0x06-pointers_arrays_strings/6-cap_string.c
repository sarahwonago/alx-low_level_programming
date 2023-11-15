#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
		}
	}

	return (str);
}
