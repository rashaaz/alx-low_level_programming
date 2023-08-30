#include "main.h"

/**
 * _sqrt - helper function
 * @n: number
 * @x: guess for the square
 *
 * Return: square
 */

int _sqrt(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - give square
 * @n: number
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
