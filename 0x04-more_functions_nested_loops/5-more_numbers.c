#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 * Return: nothing
 */
void more_numbers(void)
{
	int i = '0';
	int j;

	while(i <= '9')
	{
		j = '1';

		while(j <= '14')
		{
			_putchar(j);
			j++;
		}
		_putchar(10);
		i++;
	}
	_putchar(10);
}
