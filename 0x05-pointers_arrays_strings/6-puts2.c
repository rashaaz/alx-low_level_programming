#include "main.h"

/**
 * puts2 - Print every other character
 * @str: Pointer to the string
*/

void puts2(char *str)
{
	int ii;

	for (ii = 0; str[ii] != '\0'; ii++)
		if (ii % 2 == 0)
		{
			_putchar(str[ii]);
		}
	_putchar('\n');
}
