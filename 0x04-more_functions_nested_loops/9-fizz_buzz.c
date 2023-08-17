#include <stdio.h>

/**
 *  main - Prints numbers from 1 to 100, following the Fizz-Buzz rules
 *
 * Return: Always 0
*/

int main(void)
{
	int ii;

	for (ii = 1; ii <= 100; ii++)
	{
		if (ii % 3 == 0 && ii % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (ii % 5 == 0)
		{
			printf("Buzz");
		}
		else if (ii % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", ii);
		}
		if (ii < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
