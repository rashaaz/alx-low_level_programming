#include "main.h"

/**
 * print_square - print straight line
 * @size: The number of times the character '#'
*/

void print_square(int size)
{
	int ii, jj;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ii = 0; ii < size; ii++)
	{
		for (jj = 0; jj < size; jj++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
