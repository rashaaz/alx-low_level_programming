#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content
 * @b: Pointer
 * @size: it is Size
*/
void print_buffer(char *b, int size)
{
	int ii;
	int jj;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (ii = 0; ii < size; ii += 10)
	{
		printf("%08x: ", ii);
		for (jj = 0; jj < 10; jj++)
		{
			if (jj + ii < size)
				printf("%02x", (unsigned char)b[jj + ii]);
			else
				printf("  ");

			if (jj % 2 == 1)
				printf(" ");
		}
		printf(" ");
		for (jj = 0; jj < 10; jj++)
		{
			if (ii + jj < size)
			{
				if (b[jj + ii] >= 32 && b[jj + ii] <= 126)
					printf("%c", b[ii + jj]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
