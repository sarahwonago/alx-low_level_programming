#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: pointer
 * @n: integer
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int res;
	unsigned int k;

	va_start(ap, n);

	k = 0;
	while (k < n)
	{
		res = va_arg(ap, int);

		printf("%d", res);
		if (k < n - 1 && (separator != NULL))
		{
			printf("%s", separator);
		}
		k++;
	}
	printf("\n");
	va_end(ap);
}
