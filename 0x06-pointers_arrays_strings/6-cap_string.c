#include <stdio.h>

/**
 * cap_string - capitalizes all words after the separator
 * @tt: input
 *
 * Return: pointer
 */
char *cap_string(char *tt)
{
	int ii;
	int ss = 1;

	for (ii = 0; tt[ii] != '\0'; ii++)
	{
		if (tt[ii] == '\n' ||  tt[ii] == ',' ||
				tt[ii] == ' '   ||   tt[ii] == '\t' ||
				tt[ii] == '!' || tt[ii] == '?' ||
				tt[ii] == ';' || tt[ii] == '.' ||
				tt[ii] == '"' || tt[ii] == '{' ||
				tt[ii] == ')' || tt[ii] == '(' || tt[ii] == '}')
		{
			ss = 1;
		}
		else if (ss && (tt[ii] >= 'a' && tt[ii] <= 'z'))
		{
			tt[ii] = tt[ii] - 32;
			ss = 0;
		}
		else if (tt[ii] >= 'A' && tt[ii] <= 'Z')
		{
			ss = (0);
		}
	}

	return (tt);
}
