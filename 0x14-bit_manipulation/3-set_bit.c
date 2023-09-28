#include "main.h"

/**
 * set_bit - Sets the value
 * @n: Pointer
 * @index: index
 *
 * Return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
