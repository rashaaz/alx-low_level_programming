#include "main.h"

/**
 * _strncpy - Copies at most n
 * @dest: The destination
 * @src: The source
 * @n: The number
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ii;

	for (ii = 0; ii < n && src[ii] != '\0'; ii++)
	{
		dest[ii] = src[ii];
	}

	while (ii < n)
	{
		dest[ii] = '\0';
		ii++;
	}

	return (dest);
}
