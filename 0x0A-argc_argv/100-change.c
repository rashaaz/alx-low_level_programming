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
		int r = 0;
		int m = atoi(argv[1]);
		int sh[5] = {25, 10, 5, 2, 1};

		for (int ii = 0; ii < 5; ii++)
		{
			if (m >= sh[ii])
			{
				r += m / sh[ii];
				m = m % sh[ii];
			}
		}
		printf("%d\n", r);
	}
	return (0);
}
