#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory
 * @b: number
 *
 * Return: r or when r == NULL return 98
 */

void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b * sizeof(unsigned int));

	if (r == NULL)
	{
		exit(98);
	}

	return (r);
}
