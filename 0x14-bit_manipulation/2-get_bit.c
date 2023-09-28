#include "main.h"

/**
 * get_bit - value of a bit in index.
 * @n: number
 * @index: index
 *
 * Return: value of the bit, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
