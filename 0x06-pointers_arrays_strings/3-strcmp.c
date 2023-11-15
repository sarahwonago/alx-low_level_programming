#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if s1 and s2 are the same, positive if s1 is greater,
 *         and negative if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0, k = 0;

	while (k == 0)
	{
		if ((s1[j] == '\0') && (s2[j] == '\0'))
			break;
		k = s1[j] - s2[j];
		j++;
	}

	return (k);
}
