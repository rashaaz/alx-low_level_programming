#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of the thing you inter
 * @argv: array of number of the thing you inter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int), n, n1;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	n1 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(n, n1));

	return (0);
}
