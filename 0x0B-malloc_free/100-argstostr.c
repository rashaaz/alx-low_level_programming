#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates program arguments
 * @ac: number
 * @av: strings
 *
 * Return: pointer or NULL if s == NULL
 */

char *argstostr(int ac, char **av)
{
	int ii;
	int jj;
	int len = 0;
	char *s;
	char *tp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (ii = 0; ii < ac; ii++)
	{
		for (jj = 0; av[ii][jj] != '\0'; jj++)
			len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	tp = s;

	for (ii = 0; ii < ac; ii++)
	{
		for (jj = 0; av[ii][jj] != '\0'; jj++)
			*tp++ = av[ii][jj];
		*tp++ = '\n';
	}

	*tp = '\0';

	return (s);
}
