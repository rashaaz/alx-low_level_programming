#include "main.h"

/**
 * print_binary - Prints the binary
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int sh = sizeof(n) * 8;
	int fl = 0;

	while (sh)
	{
		if (n & 1L << --sh)
		{
			_putchar('1');
			fl++;
		}
		else if (fl)
		{
			_putchar('0');
		}
	}
	if (!fl)
		_putchar('0');
}
