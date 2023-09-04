#include "main.h"
#include <stdlib.h>

/**
 * create_array - make an array of characters
 * @size: the size
 * @c: charcter
 *
 * Return: 0 if size == 0 or r == NULL else r
 */

char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	r = malloc(sizeof(char) * size);

	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		r[i] = c;
	}
	return (r);
}
