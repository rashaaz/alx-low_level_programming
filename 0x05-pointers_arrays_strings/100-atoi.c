#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: Pointer to the string
 *
 * Return: integer
*/

int _atoi(char *s)
{
	int re = 0;
	int sn = 1;
	int d = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sn *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			re = re * 10 + (*s - '0');
		}
		else if (d)
		{
			break;
		}
		s++;
	}
	return (re * sn);
}
