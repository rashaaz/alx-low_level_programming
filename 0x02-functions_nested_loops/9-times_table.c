#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the 9 times table in a specific format.
 * It uses the _putchar function to output the characters.
*/

void times_table(void)
{
	int i, j, re;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			re = i * j;
			if (re > 10)
			{
				_putchar((re / 10) + '0');
				_putchar((re % 10) + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(re + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
