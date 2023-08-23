#include "main.h"

/**
 * print_number - prints integer
 * @n: integer number
 *
 * Return: void
*/

void print_number(int n)
{
	unsigned int xx = n;

	if (n < 0)
	{
		_putchar('-');
		xx = -n;
	}
	if (xx / 10 != 0)
	{
		print_number(xx / 10);
	}
	_putchar((xx % 10) + '0');
}
