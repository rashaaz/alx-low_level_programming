#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num;
	char *sh = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (num--)
	{
		printf("%02hhx%s", *sh++, num ? " " : "\n");
	}
	return (0);
}
