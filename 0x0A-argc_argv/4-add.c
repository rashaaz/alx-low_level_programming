#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print value sum of argv
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: 0 (Success) else 1
 */

int main(int argc, char *argv[])
{
	int ii;
	int r = 0;

	for (ii = 1; ii < argc; ii++)
	{
		char *s = argv[ii];

		for (; *s; s++)
		{
			if (*s < 48 || *s > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		r += atoi(argv[ii]);
	}

	printf("%d\n", r);
	return (0);
}
