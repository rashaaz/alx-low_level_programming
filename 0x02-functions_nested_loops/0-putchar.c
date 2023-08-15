#include "rasha.h"

/**
 * main - Entry point
 *
 * Description: program whit funktion
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char rs[] = "_putchar";
	int i;

	for (i = 0; rs[i] != '\0'; i++)
	{
		_putchar(rs[i]);
	}
	_putchar('\n');
	return (0);
}
