#include "main.h"
#include <stdlib.h>

/**
 * _realloc - make realloc
 * @ptr: old memory allocated
 * @old_size: the old size
 * @new_size: the new size
 *
 * Return: NULL or ptr or nn
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, ms;
	char *nn, *oo;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		nn = malloc(new_size);
		if (nn == NULL)
			return (NULL);
		else
			return (nn);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nn = malloc(new_size);
	oo = ptr;

	if (nn == NULL)
	{
		return (NULL);
	}

	ms = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < ms; i++)
		nn[i] = oo[i];
	free(ptr);
	return (nn);
}
