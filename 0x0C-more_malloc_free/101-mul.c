#include "main.h"
#include <stdlib.h>

/**
 * number - do the sane jop of atoi
 * @sh: pointer
 *
 * Return: ng * lt
 */
int number(char *sh)
{
	unsigned long int i, lt = 0, m;
	int ng;

	ng = 1;
	for (m = 0; !(sh[m] >= '0' && sh[m] <= '9'); m++)
	{
		if (sh[m] == '-')
		{
			ng *= -1;
		}
	}
	for (i = m; (sh[i] >= '0' && sh[i] <= '9'); i++)
	{
		lt *= 10;
		lt += (sh[i] - 48);
	}
	return (ng * lt);
}

/**
 * pr - print number
 * @x: number
 *
 * Return: re
 */

void pr(unsigned long int x)
{
	unsigned long int re, d = 1, i;

	for (; x / d > 9; d /= 10)
	{
		re = x / d;
		_putchar('0' + re);
	}
}

/**
 * ing - print string
 * @s: pointer
 */

void ing(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}
}

/**
 * main - Entry point
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		ing("Error");
		exit(98);
	}
	pr(number(argv[1]) * number(argv[2]));
	_putchar('\n');

	return (0);
}
