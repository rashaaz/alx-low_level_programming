#include "function_pointers.h"

/**
 * array_iterator - Executes a function of element of an array
 * @array: array
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = array + size - 1;

	if (array && action && size)
		while (array <= i)
			action(*array++);

}
