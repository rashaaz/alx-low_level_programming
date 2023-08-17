#include "main.h"

/**
 * _isdigit - Checks for number btweem 1,9.
 * @c: The input and character to be checked.
 *
 * Return: 1 if c is number btweem 1,9, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
