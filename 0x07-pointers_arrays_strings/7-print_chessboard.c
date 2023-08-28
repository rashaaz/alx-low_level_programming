#include "main.h"

/**
 * print_chessboard - prints 2d arrry
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int ii, jj;

	for (ii = 0; ii < 8; ii++)
	{
		for (jj = 0; jj < 8; jj++)
		{
			_putchar(a[ii][jj]);
		}
		_putchar('\n');
	}
}
