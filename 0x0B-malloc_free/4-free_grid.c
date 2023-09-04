#include "main.h"
#include <stdlib.h>

/**
 * free_grid - unllocate 2D
 * @grid: pointer  of arry
 * @height: The height
 */

void free_grid(int **grid, int height)
{
	int ii;

	if (grid != NULL)
	{
		for (ii = 0; ii < height; ii++)
		{
			free(grid[ii]);
		}
		free(grid);
	}
}
