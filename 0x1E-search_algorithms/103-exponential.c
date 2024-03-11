#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @left: left index of the search range
 * @right: right index of the search range
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t ii;

if (array == NULL)
return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (ii = left; ii < right; ii++)
printf("%d, ", array[ii]);
printf("%d\n", array[ii]);

ii = left + (right - left) / 2;
if (array[ii] == value)
return (ii);
if (array[ii] > value)
right = ii - 1;
else
left = ii + 1;
}

return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
size_t ii = 0, right;

if (array == NULL)
return (-1);

if (array[0] != value)
{
for (ii = 1; ii < size && array[ii] <= value; ii = ii * 2)
printf("Value checked array[%ld] = [%d]\n", ii, array[ii]);
}

right = ii < size ? ii : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", ii / 2, right);
return (_binary_search(array, ii / 2, right, value));
}
