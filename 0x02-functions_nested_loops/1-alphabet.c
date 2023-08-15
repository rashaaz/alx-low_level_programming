#include "main.h"

/**
 * print_alphabet - Writes a character from 'a' to 'z'
 *
 * This function prints each character from 'a' to 'z'
 * using the _putchar function
 *
 * Return: Always void (no return value)
*/

void print_alphabet(void)
{
	char p;

	p = 'a';
	while (p <= 'z')
	{
		_putchar(p);
		p++;
	}
	_putchar(p);
}
