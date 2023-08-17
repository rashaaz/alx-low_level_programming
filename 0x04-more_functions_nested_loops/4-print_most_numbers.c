#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 ,9 excpt 2.4 and new line
 *
 * Return: 0 always (successful)
*/

void print_most_numbers(void)
{
	int ii;

	for (ii = 0; ii <= 9; ii++)
	{
		if (ii != 2 && ii != 4)
		_putchar(ii + '0');
	}
	_putchar('\n');
}
