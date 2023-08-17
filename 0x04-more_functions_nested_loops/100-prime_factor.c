#include <stdio.h>

/**
 * square - Calculates the square root of a number
 * @g: The number for which the square root
 *
 * Return: The square root of the number.
*/
double square(double g)
{
	double ii = 0;
	double jj = g / 2;

	while (jj != ii)
	{
		ii = jj;
		jj = (g / ii + ii) / 2;
	}

	return (jj);
}

/**
 * calculate - Calculates the square root
 * @cc: The non-negative number for which the square root
*/

void calculate(long int cc)
{
	int la, pr;

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
	{
		la = cc;
	}
	printf("%d\n", la);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
*/
int main(void)
{
	int yy;

	calculate(612852475143);
	return (0);
}
