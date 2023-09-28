#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0, 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char *)&x;

	if (*ptr)
		return (1);
	else
		return (0);
}
