#include <stdio.h>
#include <stdio.h>

/**
 * cap_string - capitalizes all words after the sine
 * @str: input
 *
 * Return: pointer
 */

char *cap_string(char *str)
{
	int ii;
	int ss = 1;

	for (ii = 0; str[ii] != '\0'; ii++)
	{

		if (str[ii] == ' ' || str[ii] == '\t' || str[ii] == '\n' ||
				str[ii] == ',' || str[ii] == ';' || str[ii] == '.' ||
				str[ii] == '!' || str[ii] == '?' || str[ii] == '"' ||
				str[ii] == '(' || str[ii] == ')' || str[ii] == '{' || str[ii] == '}')
		{
			ss = 1; 
		}
		else if (ss && (str[ii] >= 'a' && str[ii] <= 'z'))
		{
			str[ii] = str[ii] - 32;
			ss = 0; 
		}
		else
		{
			ss = 0; 
		}
	}

	return str;
}

