#include "main.h"

/**
 * _strcat - concatenates
 * @dest: The destination
 * @src: The source
 * Return: A pointer to the resulting
 */

char *_strcat(char *dest, char *src)
{
	int ii, jj;

	for (ii = 0; dest[ii] != '\0'; ii++)
	{

	}
	for (jj = 0; src[jj] != '\0'; jj++)
	{
		dest[ii + jj] = src[jj];
	}
	dest[ii + jj] = '\0';
	return (dest);
}
