#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print mul of argv[1] and [2]
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: 0 (Success), else 1
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int m = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
