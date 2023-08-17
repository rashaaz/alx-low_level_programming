#include "main.h"

/**
 * print_triangle - Prints a triangle whit '#'
 * @size: The size of the triangle.
*/
void print_triangle(int size)
{
	int ii, jj;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ii = 0; ii < size; ii++)
	{
		for (jj = 0; jj < size - ii - 1; jj++)
		{
			_putchar(' ');
		}

		for (jj = 0; jj <= ii; jj++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
