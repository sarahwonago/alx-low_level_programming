#include <stdio.h>
#include "main.h"

/**
 * _isdigit -checks for digit 0-9
 * @c: input integer
 * Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0); 
	}
}
