#include "main.h"

/**
 * print_number - Prints an integer whit Recursion
 * @n: The number to be printed.
*/

void print_number(int n)
{
	unsigned int kk = n;

	if (n < 0)
	{
		_putchar('-');
		kk = -kk;
	}
	if ((kk / 10) > 0)

		print_number(kk / 10);

	_putchar((kk % 10) + 48);
}
