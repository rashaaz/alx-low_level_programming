#include "main.h"

/**
 * reverse_array - reverses
 * @a: The array
 * @n: lenght
 */

void reverse_array(int *a, int n)
{
	int ii;
	int jj;
	char tp;

	jj = n-1;
	for (ii = 0; ii < jj; ii++)
	{
		tp = a[ii];
		a[ii] = a[n - ii - 1];
		a[n - ii - 1] = tp;
		jj--;
	}
}
