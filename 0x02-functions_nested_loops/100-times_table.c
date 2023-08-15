#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @o: The times table to print.
 *
 * Description: This function prints the n times
 * table in a specific format.
 * If n is greater than 15 or less than 0,
 * the function does not print anything.
*/

void print_times_table(int o)
{
	int i, j;

	if (o < 0 || o > 15)
	return;

	for (i = 0; i <= o; i++)
	{
		for (j = 0; j <= o; j++)
		{
			int resu = i * j;

			if (j == 0)
			{
				printf(",   %d", resu);
			}
			else
			{
				printf(",   %d", resu);
			}
		}
		printf("\n");
	}
}
