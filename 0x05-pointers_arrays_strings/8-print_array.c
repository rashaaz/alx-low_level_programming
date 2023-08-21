#include "main.h"

/**
 * print_array - Print n elements of an array
 * @a: Pointer to the array
 * @n: Number of elements
*/

void print_array(int *a, int n)
{
	int ii;

	for (ii = 0; ii < n; ii++)
	{
		printf("%d", a[ii]);
		if (ii < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
