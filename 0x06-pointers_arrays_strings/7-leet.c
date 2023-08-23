#include "main.h"

/**
 * leet - encodes a string
 * @ra: a string
 *
 * Return: a pointer
 */

char *leet(char *ra)
{
	int ii;

	for (ii = 0; ra[ii] != '\0'; ii++)
	{
		if (ra[ii] == 'a' || ra[ii] == 'A')
		{
			ra[ii] = '4';
		}
		if (ra[ii] == 'e' || ra[ii] == 'E')
		{
			ra[ii] = '3';
		}
		if (ra[ii] == 'o' || ra[ii] == 'O')
		{
			ra[ii] = '0';
		}
		if (ra[ii] == 't' || ra[ii] == 'T')
		{
			ra[ii] = '7';
		}
		if (ra[ii] == 'l' || ra[ii] == 'L')
		{
			ra[ii] = '1';
		}
	}

	return (ra);
}
