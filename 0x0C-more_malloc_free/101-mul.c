#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: arguments
 * @argv: arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *n1, *n2;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	n1 = argv[1];
	n2 = argv[2];

	for (i = 0; n1[i] != '\0'; i++)
	{
		if (!_digit(n1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; n2[i] != '\0'; i++)
	{
		if (!_digit(n2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	if (n1[0] == '0' || n2[0] == '0')
	{
		printf("0\n");
		return (0);
	}

	mult(n1, n2);

	return (0);
}

/**
 * _digit - Check if a character is a digit
 * @x: character
 *
 * Return: 1 if valid, 0 if not
 */
int _digit(char x)
{
	return (x >= '0' && x <= '9');
}

/**
 * mult - Multiply two numbers represented as strings
 * @m1: First number
 * @m2: Second number
 */
void mult(char *m1, char *m2)
{
	int l1 = _len(m1);
	int l2 = _len(m2);
	int *re;
	int i, j, cc, pp;

	re = calloc(l1 + l2, sizeof(int));
	if (re == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = l1 - 1; i >= 0; i--)
	{
		cc = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			pp = (m1[i] - '0') * (m2[j] - '0') + re[i + j + 1] + cc;
			cc = pp / 10;
			re[i + j + 1] = pp % 10;
		}
		re[i + j + 1] = cc;
	}

	for (i = 0; i < l1 + l2; i++)
	{
		if (re[i] != 0)
		{
			break;
		}
	}

	for (; i < l1 + l2; i++)
	{
		_putchar(re[i] + '0');
	}
	_putchar('\n');

	free(re);
}

/**
 * _len - Calculate the length of a string
 * @t: string
 *
 * Return: The length
 */
int _len(char *t)
{
	int n = 0;

	while (t[n] != '\0')
	{
		n++;
	}
	return (n);
}
