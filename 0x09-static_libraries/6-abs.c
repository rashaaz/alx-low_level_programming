#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @cc: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
*/

int _abs(int cc)
{
	if (cc < 0)
	{
		cc = cc * (-1);
		return (cc);
	}
	else
	{
		return (cc);
	}
}
