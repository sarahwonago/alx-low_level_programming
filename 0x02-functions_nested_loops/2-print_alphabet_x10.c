#include "main.h"

/**
 * main - prints alphabet ten times
 * Description:print_alphabet_x10(void): prints 10 times the alphabet. 
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char c;

	while (counter < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		counter++;
	}
}
