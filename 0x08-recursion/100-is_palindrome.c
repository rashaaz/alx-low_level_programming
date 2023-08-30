#include "main.h"

/**
 * _len - Calculate length
 * @s: string
 * Return: length
 */

int _len(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + _len(s + 1);
}

/**
 * chec - helper function
 * @s: string
 * @x: starting index
 * @y: ending index
 *
 * Return: 1 if the substring is a palindrome, else 0
 */

int chec(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	return (chec(s, x + 1, y - 1));
}

/**
 * is_palindrome - Checks string
 * @s: string
 *
 * Return: 1 if s is a palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len = _len(s);

	return (chec(s, 0, len - 1));
}
