#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer
 * @index: position
 * Return: 1 if it worked and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);
	b = 1 << index;
	if (*n & b)
		*n ^= b;

	return (1);
}
