#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: The number of times the character '_'
*/

void print_line(int n)
{
	int ii;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ii = 0; ii < n; ii++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
