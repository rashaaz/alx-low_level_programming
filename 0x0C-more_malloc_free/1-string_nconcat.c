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
	unsigned int l2 = 0, ii, jj, l1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;


	r = malloc(l1 + n + 1);

	if (r == NULL)
	{
		return (NULL);
	}

	for (ii = 0; s[ii] != '\0'; ii++)
	{
		r[ii] = s1[ii];
	}

	for (jj = 0; jj < n; jj++)
	{
		r[ii] = s2[jj];
		ii++;
	}

	r[ii] = '\0';

	return (r);
}
