#include "main.h"

/**
 * _strlen - lingth of string
 * @s: Pointer to the string
 * Return: The length
*/

int _strlen(char *s)
{
	int ii;

	for (ii = 0; s[ii] != '\0'; ii++)
		s++;
		return ii;
}
