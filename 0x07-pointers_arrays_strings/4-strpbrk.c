#include <stddef.h>

/**
 * _strpbrk - locates a character
 * @s: pointer
 * @accept: pointer
 *
 * Return: (s + ii)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int ii, jj;

	for (ii = 0; s[ii] != '\0'; ii++)
	{
		for (jj = 0; accept[jj] != '\0'; jj++)
		{
			if (s[ii] == accept[jj])
			{
				return (s + ii);
			}
		}
	}
}
