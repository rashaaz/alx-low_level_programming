#include <stddef.h>

/**
 * _memcpy - same jop of standard library function: memcpy
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 *
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ii;

	for (ii = 0; ii < n; ii++)
	{
		dest[ii] = src[ii];
	}
	return (dest);
}
