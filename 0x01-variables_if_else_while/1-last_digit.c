#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program whit if
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	else if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else
	{
		printf("Last digit of %d is %d 0 and is 0\n", n, num);
	}
}
