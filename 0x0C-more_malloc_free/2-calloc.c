#include "main.h"
#include <stdlib.h>

/**
 * _calloc - make an array of characters
 * @size: number
 * @nmemb: number
 *
 * Return: 0 if size == 0 || nmemb == 0 or r == NULL else r
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	r = malloc(sizeof(unsigned int) * size * nmemb);

	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		r[i] = 0;
	}
	return (r);
}
