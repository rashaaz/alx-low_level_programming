#include "function_pointers.h"

/**
 * array_iterator - Executes a function of element of an array
 * @array: array
 * @size: size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t ii;

		for (ii = 0; ii < size; ii++)
		{
			action(array[ii]);
		}
	}
}
