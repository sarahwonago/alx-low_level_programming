#include "main.h"

/**
 * set_bit - sets the value of an index at any given time
 * @n: pointer to int
 * @index: position
 * Return: 1 for succee or -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);
	s = 1 << index;
	*n = (*n | s);

	return (1);
}

