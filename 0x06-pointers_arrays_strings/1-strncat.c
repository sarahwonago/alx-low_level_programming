#include "main.h"

/**
 * _strncat - Concatenates n bytes from src to dest
 * @dest: The destination string
 * @src: The source string to append to dest
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src_len < n)
	{
		dest[dest_len] = src[src_len];

		if (src[src_len] == '\0')
			break;

		dest_len++;
		src_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
