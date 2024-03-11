#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
int ii;

if (array == NULL)
return (-1);

for (ii = 0; ii < (int)size; ii++)
{
printf("Value checked array[%u] = [%d]\n", ii, array[ii]);
if (value == array[ii])
return (ii);
}
return (-1);
}
