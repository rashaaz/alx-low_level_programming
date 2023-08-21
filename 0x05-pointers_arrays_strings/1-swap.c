#include "main.h"

/**
 * swap_int - Swap the values
 * @a: Pointer to the first number
 * @b: Pointer to the second number
*/

void swap_int(int *a, int *b)
{
	int tp = *a;
	*a = *b;
	*b = tp;
}
