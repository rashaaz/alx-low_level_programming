#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @ioo: Starting number
 *
 *  Description: This function prints all natural numbers from n to 98,
 *  separated by a comma and a space, followed by a new line.
*/

void print_to_98(int ioo)
{
	int ii;

	if (ioo >= 98)
	{
		for (ii = ioo; ii > 98; ii--)
		{
			_putchar((ii / 10) + '0');
			_putchar((ii % 10) + '0');
			if (ii != 99)
			
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (ii = ioo; ii < 98; ii++)
		{
			_putchar((ii / 10) + '0');
			_putchar((ii % 10) + '0');
			if (ii != 99)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar((98 / 10) + '0');
	_putchar((98 % 10) + '0');
	_putchar('\n');
}
