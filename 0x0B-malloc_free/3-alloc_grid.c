#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate 2D
 * @width: The width
 * @height: The height
 *
 * Return: pointer or NULL if r == NUUL if r[ii] = Null
 */

int **alloc_grid(int width, int height)
{
	unsigned int **r;
	unsigned int ii;
	unsigned int jj;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	r = malloc(sizeof(int *) * height);

	if (r == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii < height; ii++)
	{
		r[ii] = malloc(sizeof(int) * width);

		if (r[ii] == NULL)
		{
			for (jj = 0; jj < ii; jj++)
			{
				free(r[jj]);
			}
			free(r);
			return (NULL);
		}

		for (jj = 0; jj < width; jj++)
		{
			r[ii][jj] = 0;
		}
	}

	return (r);
}
