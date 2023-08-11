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
	char sr, ns;

	sr = 'a';
	while (sr <= 'z')
	{
		putchar(sr);
		sr++;
	}

	ns = 'A';
	while (ns <= 'Z')
	{
		putchar(ns);
		ns++;
	}
	putchar('\n');
	return (0);
}
