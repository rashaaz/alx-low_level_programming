#include "main.h"

/**
 * flip_bits - Counts the number to bits to flip
 * @n: number1
 * @m: number2
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int my_xor = n ^ m;
	unsigned int co = 0;

	while (my_xor)
	{
		if (my_xor & 1UL)
			co++;
		my_xor = my_xor >> 1;
	}

	return (co);
}
