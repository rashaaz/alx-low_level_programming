#include "main.h"

/**
 * rot13 - encodes a string
 * @rr: input
 *
 * Return: pointer
*/
char *rot13(char *rr)
{
	char *sh = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *en = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int ii, jj;

	for (ii = 0; rr[ii] != '\0'; ii++)
	{
		for (jj = 0; sh[jj] != '\0' && en[jj] != '\0'; jj++)
		{
			if (rr[ii] == sh[jj])
			{
				rr[ii] = en[jj];
				break;
			}
		}
	}

	return (rr);
}
