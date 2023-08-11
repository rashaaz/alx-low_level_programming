#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program whit while
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
