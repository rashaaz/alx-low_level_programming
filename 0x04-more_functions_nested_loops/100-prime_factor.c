#include <stdio.h>

/**
 * square - Calculates the square root of a number
 * @g: The number for which the square root
 *
 * Return: The square root of the number.
*/
double square(double g)
{
	float ii, jj;

	 ii = g / 2;
	 jj = 0;

	while (ii != jj)
	{
		jj = ii;
		ii = (g / jj + jj) / 2;
	}

	return (ii);
}

/**
 * calculate - Calculates the square root
 * @cc: The non-negative number for which the square root
*/

void calculate(long int cc)
{
	int pr, la;

	while (cc % 2 == 0)
	{
		cc = cc / 2;
	}

	for (pr = 3; pr <= square(cc); pr += 2)
	{
		while (cc % pr == 0)
		{
			cc = cc / pr;
			la = pr;
		}
	}
	if (cc > 2)
		la = cc;
	printf("%d\n", la);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
*/
int main(void)
{
	calculate(612852475143);

	return (0);
}
