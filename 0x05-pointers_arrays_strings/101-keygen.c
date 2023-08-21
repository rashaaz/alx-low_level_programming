#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sm;
	char ss;

	srand (time(NULL));
	while (sum <= 2645)
	{
		ss = rand() % 128;
		sm += ss;
		putchar(ss);
	}
	putchar(2772 - sm);
	return (0);
}
