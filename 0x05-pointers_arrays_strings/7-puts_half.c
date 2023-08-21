#include "main.h"
/**
 * puts_half - Print the second half
 * @str: Pointer to the string
*/
void puts_half(char *str)
{
	int ii, jj;

	for (ii = 0; str[ii] != '\0'; ii++)
	{

	}
	for (jj = (ii +1) /= 2; str[jj] != '\0'; jj++)
	{
		_putchar(str[jj]);
	}
	_putchar('\n');
}
