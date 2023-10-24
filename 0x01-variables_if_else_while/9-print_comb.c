#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48; //ascii for 0

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44); //ascii for a comma
			putchar(32); //ascii for a space
		}
		i++;
	}

	putchar(10); //ascii for a newline

	return (0);
}
