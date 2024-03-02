#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	double sum;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}


