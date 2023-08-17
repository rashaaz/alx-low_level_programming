#include "main.h"

/**
 * more_numbers - Writes the lowercase alphabet from 0 to 14 10 times
 *
 * with each iteration followed by a newline
 *
 * Return: Always void (no return value)
*/

void more_numbers(void)
{
	char pl;
	char co;

	for (co = 0; co < 10; co++)
	{
		pl = 0;
		while (pl <= 13)
		{
			pl++;
			if (pl >= 10)
			{
				_putchar(pl / 10 + '0');
				_putchar(pl % 10 + '0');
			}
			else
			{
				_putchar(pl + '0');
			}
		}
		_putchar('\n');
	}
}
