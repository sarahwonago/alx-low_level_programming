#include "main.h"

/**
 * flip_bits - returns the number of bits flipped to get to
 * another number from another number
 * @n: input integer
 * @m: input integer
 * Return: bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b;

	for (b = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			b++;
	}
	return (b);
}
