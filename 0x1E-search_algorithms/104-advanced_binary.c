#include "search_algos.h"

/**
 * rec_search - Recursive binary search function
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int rec_search(int *array, size_t size, int value)
{
size_t hh = size / 2;
size_t ii;

if (array == NULL || size == 0)
return (-1);

printf("Searching in array");

for (ii = 0; ii < size; ii++)
printf("%s %d", (ii == 0) ? ":" : ",", array[ii]);

printf("\n");

if (hh && size % 2 == 0)
hh--;

if (value == array[hh])
{
if (hh > 0)
return (rec_search(array, hh + 1, value));
return ((int)hh);
}

if (value < array[hh])
return (rec_search(array, hh + 1, value));

hh++;
return (rec_search(array + hh, size - hh, value) + hh);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
int ind;

ind = rec_search(array, size, value);

if (ind >= 0 && array[ind] != value)
return (-1);

return (ind);
}
