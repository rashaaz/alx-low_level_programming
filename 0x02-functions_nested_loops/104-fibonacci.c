#include "main.h"
#include <stdio.h>

/**
 * enght - rutern the lenght of string
 * @mb: operand number
 *
 * Return: number of digits
*/

int enght(int mb)
{
	int le = 0;

	if (!mb)
		return (1);

	while (mb)
	{
		mb = mb / 10;
		le += 1;
	}
	return (le);
}

/**
 * main - Entry point
 *
 * description: print the first 98 fibonacci numbers
 * string whit 1 and 2 followd by a new lin
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int con, uuub;
	unsigned long int s1 = 1,
		      s2 = 2, sum, ss = 1000000000,
		      s1o = 0, su = 0, s2o = 0;

	for (con = 1; con <= 98; con++)
	{
		if (s1o > 0)
		{
			printf("%lu", s1o);
			uuub = enght(ss) - 1 - enght(s1);
		}

		while (s1o > 0 && uuub > 0)
		{
			printf("%d", 0);
			uuub--;
		}
		printf("%lu", s1);
		sum = (s1 + s2) % ss;
		su = s1o + s2o + (s1 + s2) / ss;
		s1 = s2;
		s1o = s2o;
		s2 = sum;
		s2o = su;

		if (con != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
