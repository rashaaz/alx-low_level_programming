#include "main.h"

/**
 * print_diagsums - print square matrix of integers
 * @a: pointer
 * @size: linght
 */

void print_diagsums(int *a, int size)
{
	unsigned int ii;
	unsigned int num = 0;
	unsigned int num1 = 0;

	for (ii = 0; ii < size; ii++)
	{
		num1 += a[ii * size + (size - 1 - ii)];
		num += a[ii * size + ii];
	}

	printf("%d, ", num);
	printf("%d\n", num1);
}
