#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: This function prints the time in the format HH:MM
 * for every minute of the day, from 00:00 to 23:59.
 * It uses the _putchar function to output the characters.
*/

void jack_bauer(void)
{
	int ii, jj;

	for (ii = 0; ii <= 23; ii++)
	{
		for (jj = 0; jj <= 59; jj++)
		{
			_putchar((ii / 10) + '0');
			_putchar((ii / 10) + '0');
			_putchar(':');
			_putchar((jj / 10) + '0');
			_putchar((jj / 10) + '0');
			_putchar('\n');
		}
	}
}
