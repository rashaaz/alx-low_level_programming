#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: (haystack + ii);
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int ii, jj;

	for (ii = 0; haystack[ii] != '\0'; ii++)
	{
		for (jj = 0; needle[jj] != '\0'; jj++)
		{
			if (haystack[ii + jj] != needle[jj])
			{
				break;
			}
		}

		if (needle[jj] == '\0')
		{
			return (haystack + ii);
		}
	}

	return (NULL);
}
