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

	int last_digit;

	if (n < 0)
	{
		n = -n;
		last_digit = n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	
	_putchar(last_digit + '0');

	return (last_digit);
}
