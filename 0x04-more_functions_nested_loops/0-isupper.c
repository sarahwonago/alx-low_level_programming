#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: input integer
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); 
	}
	else
	{
		return (0); 
	}
}

