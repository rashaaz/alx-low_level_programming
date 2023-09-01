#include <stddef.h>

/**
 * _memset - same jop of standard library function: memset
 * @s: pointer
 * @b: new constant
 * @n: number of bytes
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ii;

	for (ii = 0; ii < n; ii++)
	{
		s[ii] = b;
	}
	return (s);
}
