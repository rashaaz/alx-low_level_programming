#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program with for
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ww;

	ww  = 'a';
	for (ww = 'a'; ww <= 'z'; ww++)
	{
		if (ww != 'q' && ww != 'e')
		{
			putchar(ww);
		}
	}
	putchar('\n');
	return (0);
}
