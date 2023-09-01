#include <stdio.h>

/**
 * main - print value of argv
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int ii;

	for (ii = 0; ii < argc; ii++)
	{
		printf("%s\n", argv[ii]);
	}
	return (0);
}
