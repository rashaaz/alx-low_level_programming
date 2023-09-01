#include "main.h"

/**
 * _strcmp - compares
 * @s1: The first
 * @s2: The second
 *
 * Return: Negative whene s1 is less than s2,
 * Positive whene s1 is greater than s2,
 * 0 whene both strings are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int ii;

	for (ii = 0; s1[ii] != '\0' && s2[ii] != '\0'; ii++)
	{
		if (s1[ii] != s2[ii])
		{
			return (s1[ii] - s2[ii]);
		}
	}
	return (s1[ii] - s2[ii]);
}
