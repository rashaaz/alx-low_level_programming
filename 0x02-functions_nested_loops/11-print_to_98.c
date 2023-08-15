#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @ioo: Starting number
 *
 *  Description: This function prints all natural numbers from n to 98,
 *  separated by a comma and a space, followed by a new line.
*/

void print_to_98(int ioo)
{
	int ii;

	if (ioo >= 98)
	{
		for (ii = ioo; ii > 98; ii--)
		{
			printf("%d", ii);
			if (ii != 98)
			{
				printf(", ");
			
		}
	}
	else
	{
		for (ii = ioo; ii < 98; ii++)
		{
			printf("%d", ii);
			if (ii != 98)
			{
				printf(", ");
			}
		}
	}
	printf("98\n");
}
