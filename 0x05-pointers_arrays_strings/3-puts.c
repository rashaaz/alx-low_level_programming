#include "main.h"

/**
 * _puts - Print a string
 * @str: Pointer to the string
*/

void _puts(char *str)
{
	int ii;

	for (ii = 0; str[ii] != '\0'; ii++)
	{
		_putchar(str[ii]);
	}
	_putchar('\n');
}
