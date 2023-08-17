#include "main.h"

/**
 * print_numbers - Prints numbers from 0 ,9 and new line
 *
 * Return: 0 always (successful)
*/

void print_numbers(void)
{
	int ii;

	for (ii = 0; ii <= 9; ii++)
	{
		_putchar(ii + '0');
	}
	_putchar('\n');
}
