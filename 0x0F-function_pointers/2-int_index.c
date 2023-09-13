#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array
 * @size: size
 * @cmp: pointer
 *
 * Return: The index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
