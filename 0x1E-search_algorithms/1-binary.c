#include "search_algos.h"

/**
 * recursive_search - Recursively searches for a value
 * in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int recursive_search(int *array, size_t size, int value)
{
size_t ha = size / 2;
size_t ii;

if (array == NULL || size == 0)
return (-1);

printf("Searching in array");

for (ii = 0; ii < size; ii++)
printf("%s %d", (ii == 0) ? ":" : ",", array[ii]);

printf("\n");

if (ha && size % 2 == 0)
ha--;

if (value == array[ha])
return ((int)ha);

if (value < array[ha])
return (recursive_search(array, ha, value));

ha++;

return (recursive_search(array + ha, size - ha, value) + ha);
}

/**
 * binary_search - Searches for a value in a sorted
 * array of integers using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
int ind;

ind = recursive_search(array, size, value);

if (ind >= 0 && array[ind] != value)
return (-1);

return (ind);
}
