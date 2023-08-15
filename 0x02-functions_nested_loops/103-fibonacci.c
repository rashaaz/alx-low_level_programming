#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the sum of even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int nb1, nb2, sum;

	nb1 = 0;
	nb2 = 1;
	float all_sum;

	while (1)
	{
		sum = nb1 + nb2;
		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
			all_sum += sum;

		nb1 = nb2;
		nb2 = sum;
	}
	printf("%.0f\n", all_sum);
	return (0);
}
