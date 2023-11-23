#include "main.h"

/**
 * get_bit - returns a value of an int at a given index
 * @n: given int
 * @index: position of int
 * Return: value of bit or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	if (n == 0 && index < 64)
		return (0);

	for (s = 0; s <= 63; n >>= 1, s++)
	{
		if (index == s)
		{
			return (n & 1);
		}
	}
	return (-1);
}
