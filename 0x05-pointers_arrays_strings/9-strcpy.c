#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int ii;

	for (ii = 0; src[ii] != '\0'; ii++)
	{
		dest[ii] = src[ii];
	}
	dest[ii] = '\0';
	return (dest);
}
