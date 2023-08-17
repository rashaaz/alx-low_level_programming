#include "main.h"

/**
 * print_diagonal - print straight line
 i * @n: The number of times the character '\'
*/

void print_diagonal(int n)
{
	int ii, jj;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ii = 0; ii < n; ii++)
	{
		for (jj = 0; jj < ii; jj++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
