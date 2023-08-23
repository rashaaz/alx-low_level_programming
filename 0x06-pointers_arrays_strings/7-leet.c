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

	char *leet(char *ra)
	{
		char *sh = "aAeEoOtTlL";
		char *en = "4433007711";

		int ii, jj;

		for (ii = 0; ra[ii] != '\0'; ii++)
		{
			for (jj = 0; sh[jj] != '\0'; jj++)
			{
				if (ra[ii] == sh[jj])
				{
					ra[ii] = en[jj];
					break;
				}
			}
		}

		return (ra);
	}
