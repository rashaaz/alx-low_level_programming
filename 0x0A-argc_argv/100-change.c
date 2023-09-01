#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: Always 0 (Success) else 1
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		int ii, r, m;

		ii;
		r = 0;
		m = atoi(argv[1]);
		int sh[5] = {25, 10, 5, 2, 1};

		for (ii = 0; ii < 5; ii++)
		{
			if (m >= sh[ii])
			{
				r += m / sh[ii];
				m = m % sh[ii];
				if (m % sh[ii] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
