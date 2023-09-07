#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - return concat strings
 * @s1: string
 * @s2: string
 * @n: number of s2 we want to concat
 *
 * Return: pointer or NULL if memory was available
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int x;
	unsigned int l2 = 0;
	unsigned int ii;
	unsigned int jj;
	unsigned int l1 = 0;

	if (s1 != NULL)
	{
		for (l1 = 0; s1[l1] != '\0'; l1++)
		{
		}
	}

	if (s2 != NULL)
	{
		for (l2 = 0; s2[l2] != '\0'; l2++)
		{
		}
	}
	x = (l1 + l2 + 1);

	r = malloc(x);

	if (r == NULL)
		return (NULL);

	for (ii = 0; ii < l1; ii++)
	{
		r[ii] = s1[ii];
	}

	for (jj = 0; jj < n; jj++)
	{
		r[ii + jj] = s2[jj];
	}

	r[ii + jj] = '\0';

	return (r);
}
