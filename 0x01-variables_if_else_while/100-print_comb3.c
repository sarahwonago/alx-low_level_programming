#include <stdio.h>

/**
 * main - prints combination of numbers
 * Description: code to print combination of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    while(i <= 56)
    {
	    i = 48;
	    j = 49;

	    while(j<=57)
	    {
	
		    putchar(i);
		    putchar(j);

		    if (i != 56 && j != 57)
		    {
			    putchar(44);
			    putchar(32);
		    }
		    j++;

	    }

	    i++;
	    j++;
    }

    putchar('\n');
    return (0);
}
