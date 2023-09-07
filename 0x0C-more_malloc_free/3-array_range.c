#include "main.h"
#include <stdlib.h>

/**
 * array_range - make an array of number
 * @min: the first numder
 * @max: the last number
 *
 * Return: NULL if min > max or r == NULL else r
 */

int *array_range(int min, int max)
{
	int *r;
	int i, x;

	x = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}

	r = malloc(sizeof(int) * x);

	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < x; i++)
	{
		r[i] = min + i;
	}
	return (r);
}
