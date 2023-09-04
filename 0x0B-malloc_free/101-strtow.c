#include <stdlib.h>
#include <stdio.h>


/**
 * ww - count words
 * @s: pointer
 *
 * Return: count of words
*/
int ww(char *s)
{
	int nn = 0, ii;

	for (ii = 0; s[ii]; ii++)
	{
		if (s[ii] != ' ')
		{
			if (s[ii + 1] != ' ' && s[ii + 1] != '\0')
				nn++;
		} else if (ii == 0)
			nn++;
	}
	nn++;
	return (nn);
}


/**
 * strtow - split a string into words
 * @str: pointer
 *
 * Return: pointer
*/
char **strtow(char *str)
{
	int ii, jj, kk, ll, nn = 0, cc = 0;
	char **ch;

	if (str == NULL || *str == '\0')
		return (NULL);
	nn = ww(str);
	if (nn == 1)
		return (NULL);
	ch = (char **)malloc(nn * sizeof(char *));
	if (ch == NULL)
		return (NULL);
	ch[nn - 1] = NULL;
	ii = 0;
	while (str[ii])
	{
		if (str[ii] != ' ' && (ii == 0 || str[ii - 1] == ' '))
		{
			for (jj = 1; str[ii + jj] != ' ' && str[ii + jj]; jj++)
				;
			jj++;
			ch[cc] = (char *)malloc(jj * sizeof(char));
			jj--;
			if (ch[cc] == NULL)
			{
				for (kk = 0; kk < cc; kk++)
					free(ch[kk]);
				free(ch[nn - 1]);
				free(ch);
				return (NULL);
			}
			for (ll = 0; ll < jj; ll++)
				ch[cc][ll] = str[ii + ll];
			ch[cc][ll] = '\0';
			cc++;
			ii += jj;
		}
		else
			ii++;
	}
	return (ch);
}
