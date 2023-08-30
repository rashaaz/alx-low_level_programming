#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: string numder 1
 * @s2: string numder 2
 * Return: 1 if the strings can be considered identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	}

	if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) == 1)
		{
			return (1);
		}

		if (*s1 != '\0' && wildcmp(s1 + 1, s2) == 1)
		{
			return (1);
		}
	}

	return (0);
}
