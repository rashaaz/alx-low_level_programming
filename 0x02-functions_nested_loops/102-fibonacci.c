#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int i, nb1, nb2, sum;

	nb1 = 0;
	nb2 = 1;
	for (i = 0; i < 50; i++)
	{
		sum = nb1 + nb2;
		printf("%lu", sum);
		nb1 = nb2;
		nb2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
