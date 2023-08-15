#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @m: The number to extract the last digit from
 *
 * Return: The value of the last digit
*/

int print_last_digit(int m)
{
	int e;

	e = m % 10;
	if (m < 0)
	{
		e = -e;
	}
	_putchar('0' + e);
	return (e);
}
