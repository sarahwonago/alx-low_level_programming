#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{

	if (n < 0)
		n = -n;

	int last = n % 10;
	
	_putchar(last + '0');

	return (last);
}
