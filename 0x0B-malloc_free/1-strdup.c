#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of str
 * @str: pointer
 *
 * Return: pointer
*/

char *_strdup(char *str)
{
	char *r;
	int x;
	unsigned int i;
	unsigned int le = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		le++;
	}
	x = le + 1;
	r = malloc(sizeof(char) * x);

	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		r[i] = str[i];
	}
	r[i] = '\0';
	return (r);

}
