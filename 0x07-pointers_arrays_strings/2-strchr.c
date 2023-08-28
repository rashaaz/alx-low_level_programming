#include <stddef.h>

/**
 * _strchr - locates a character
 * @s: pointer
 * @c: character
 *
 * Return: (s + ii)
 */

char *_strchr(char *s, char c)
{
	unsigned int ii;

	for (ii = 0; s[ii] >= '\0'; ii++)
	{
		if (s[ii] == c)
		{
			return (s + ii);
		}
	}
	return ('\0');
}
