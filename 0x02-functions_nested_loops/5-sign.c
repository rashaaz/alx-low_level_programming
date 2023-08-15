#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @nr: The number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero,
 * -1 if n is less than zero
*/

int print_sign(int nr)
{
	if (nr > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (nr == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (nr < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
