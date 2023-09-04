#include <stdlib.h>
#include <stdio.h>

/**
 * _partial - create a duplicate of a portion
 * @t: pointer
 * @st: number of bgining
 * @d:number of end
 *
 * Return: pointer
 */
char *_partial(char *t, int st, int d)
{
	int jj = 0;
	int ii;

	char *r = malloc(d - st + 2);

	if (r == NULL)
		return (NULL);

	for (ii = st; ii <= d; ii++)
	{
		r[jj] = t[ii];
		jj++;
	}

	r[jj] = '\0';

	return (r);
}

/**
 * ww - count words
 * @s: pointer
 *
 * Return: count of words
 */
int ww(char *s)
{
	int cc = 0, ii, nn = 0;

	for (ii = 0; s[ii] != '\0'; ii++)
	{
		if (s[ii] != ' ')
		{
			if (!nn)
			{
				nn = 1;
				cc++;
			}
		} else
			nn = 0;
	}

	return (cc);
}

/**
 * strtow - split a string into words
 * @str: pointer
 *
 * Return: pointer
 */

char **strtow(char *str)
{
	int ii, _start = -1, _end = -1, _count = 0, jj, int num;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = ww(str);
	char **wor = malloc((num + 1) * sizeof(char *));

	if (wor == NULL)
		return (NULL);
	for (ii = 0; str[ii] != '\0'; ii++)
	{
		if (str[ii] != ' ')
		{
			if (_start == -1)
				_start = ii;
			_end = ii;
		} else if (_start != -1)
		{
			wor[_count] = _partial(str, _start, _end);
			if (wor[_count] == NULL)
				for (jj = 0; jj < _count; jj++)
					free(wor[jj]);
				free(wor);
				return (NULL);
			_count++;
			_start = -1;
			_end = -1;
		}
	}
	if (_start != -1)
		wor[_count] = _partial(str, _start, _end);
	if (wor[_count] == NULL)
		for (jj = 0; jj < _count; jj++)
			free(wor[jj]);
	free(wor);
	return (NULL);
	_count++;
	wor[_count] = NULL;
	return (wor);
}
