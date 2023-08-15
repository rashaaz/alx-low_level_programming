#include "main.h"

/**
 * print_alphabet_x10 - Writes the lowercase alphabet from 'a' to 'z' 10 times
 *
 * This function prints the lowercase alphabet from 'a' to 'z' 10 times,
 * with each iteration followed by a newline character.
 *
 * Return: Always void (no return value)
*/

void print_alphabet_x10(void)
{
	char pl;
	char co;

	for (co = 0; co < 10; co++)
	{
		pl = 'a';
		while (pl <= 'z')
		{
			_putchar(pl);
			pl++;
		}
		_putchar('\n');
	}
}
