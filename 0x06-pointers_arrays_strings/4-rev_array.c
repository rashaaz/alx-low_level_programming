#include "main.h"

/**
 * reverse_array - reverses
 * @a: The array
 * @n: lenght
 */

void reverse_array(int *a, int n)
{
	int ii;
	char tp;

	for (ii = 0; ii < n / 2; ii++)
	{
		tp = a[ii];
		a[ii] = a[n - ii - 1];
		a[n - ii - 1] = tp;
	}
}
