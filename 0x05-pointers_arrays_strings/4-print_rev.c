#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: Pointer to the string
*/

void print_rev(char *s)
{
	int ii;

	for (ii = 0; s[ii] != 0; ii++)
	{

	}
	for (ii = ii - 1; ii >= 0; ii--)
	{
		_putchar(s[ii]);
	}
	_putchar('\n');
}
