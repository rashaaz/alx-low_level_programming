#include <stddef.h>

/**
 * _strspn - linght of character
 * @s: pointer
 * @accept: pointer
 *
 * Return: linght
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ii, jj;

	for (ii = 0; s[ii] != '\0'; ii++)
	{
		for (jj = 0; accept[jj] != '\0'; jj++)
		{
			if (s[ii] == accept[jj])
			{
				break;
			}

		}
		if (accept[jj] == '\0')
		{
			break;
		}

	}

	return (ii);
}
