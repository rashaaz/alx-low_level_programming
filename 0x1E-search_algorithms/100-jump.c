#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t ju, sta, li;

if (!array || size == 0)
return (-1);
ju = (size_t) sqrt(size);
sta = li = 0;
while ((li < size) && (array[li] < value))
{
printf("Value checked array[%lu] = [%d]\n", li, array[li]);
sta = li;
li += ju;
}
printf("Value found between indexes [%lu] and [%lu]\n", sta, li);
li = li < size - 1 ? li : size - 1;
while ((array[sta] < value) && (sta < li))
{
printf("Value checked array[%lu] = [%d]\n", sta, array[sta]);
sta++;
}
printf("Value checked array[%lu] = [%d]\n", sta, array[sta]);
return (array[sta] == value ? (int) sta : -1);
}
