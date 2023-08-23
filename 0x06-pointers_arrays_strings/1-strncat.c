#include "main.h"

/**
 * _strncat - Concatenates two strings whit n
 * @dest: The destination
 * @src: The source
 * @n: The maximum number of bytes
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int ii, jj;

	for (ii = 0; dest[ii] != '\0'; ii++)
	{

	}
	for (jj = 0; jj < n && src[jj] != '\0'; jj++)
	{
		dest[ii + jj] = src[jj];
	}
	dest[ii + jj] = '\0';
	return (dest);
}
