#include "main.h"

/**
 * check -  helper function
 * @n: number
 * @num: number
 *
 * Return: 1 if n is prime, else 0
 */

int check(int n, int num)
{
	if (n <= 1)
	{
		return (0);
	}
	if (num >= n)
	{
		return (1);
	}
	if (n % num == 0)
	{
		return (0);
	}
	return (check(n, num + 1));
}

/**
 * is_prime_number - Checks
 * @n: number
 * Return: 1 if n is prime, else 0
 */

int is_prime_number(int n)
{
	return ((check(n, 2)));
}
