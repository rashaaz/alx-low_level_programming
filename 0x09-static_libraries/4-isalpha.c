#include "main.h"

/**
 *  _isalpha- Checks if a character is lowercase
 *  @ss: The character to be checked
 *
 *  Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int ss)
{
	if ((ss >= 'a' && ss <= 'z') || (ss >= 'A' && ss <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
