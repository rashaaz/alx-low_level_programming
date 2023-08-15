#include <stdio.h>

/**
 * sum_of_mult - Computes the sum of multiples
 * of 3 or 5 below a limit.
 * @l: The upper limit for finding multiples
 *
 * Return: The sum of multiples of 3 or 5 below the given limit.
*/

int sum_of_mult(int l)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < l; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	return (sum);
}

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of
 * all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("%d\n", sum_of_mult(1024));
	return (0);
}
