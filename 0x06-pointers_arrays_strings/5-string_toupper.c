#include "main.h"

/**
 * string_toupper - Reverses the content of an array of integers
 * @str: input
 *
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int ii;

	for (ii = 0; str[ii] != '\0'; ii++)
	{
		if (str[ii] >= 'a' && str[ii] <= 'z')
		{
			str[ii] = str[ii] - 32;
		}
	}

	return (str);
}
