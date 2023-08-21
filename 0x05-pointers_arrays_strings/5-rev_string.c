#include "main.h"

/**
 * rev_string - reverse a string
 * @s: Pointer to the string
*/

void rev_string(char *s)
{
	int ii, le;
	char tp;

	for (le = 0; s[le] != '\0'; le++)
	{

	}
	for (ii = 0; ii < le / 2; ii++)
	{
		tp = s[ii];
		s[ii] = s[le - ii - 1];
		s[le - ii - 1] = tp;
	}
}
